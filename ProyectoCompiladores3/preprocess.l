%e  1019
%p  2807
%n  371
%k  284
%a  1213
%o  1117

%x INCLUDE_CASE COMMENT COMMENT_LINE DEFINITION DEFINITION_VALUE

/*Universal Character Name*/
UCN		(\\u[0-9a-fA-F]{4}|\\U[0-9a-fA-F]{8})

O   [0-7]
D   [0-9]
NZ  [1-9]
L   [a-zA-Z_]
A   [a-zA-Z_0-9]
H   [a-fA-F0-9]
HP  (0[xX])
E   ([Ee][+-]?{D}+)
P   ([Pp][+-]?{D}+)
FS  (f|F|l|L)
IS  (((u|U)(l|L|ll|LL)?)|((l|L|ll|LL)(u|U)?))
CP  (u|U|L)
SP  (u8|u|U|L)
ES  (\\(['"\?\\abfnrtv]|[0-7]{1,3}|x[a-fA-F0-9]+))
WS  [ \t\v\n\f]

%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAXLEN 1024
#define PATH "./Pruebas/"
#define MAX_INCLUDE_DEPTH 10
YY_BUFFER_STATE include_stack[MAX_INCLUDE_DEPTH];
YY_BUFFER_STATE bp;
#define YY_DECL extern int yylex()


extern void yyerror(const char *);  /* prints grammar violation message */

extern int sym_type(const char *);  /* returns type from symbol table */

#define sym_type(identifier) IDENTIFIER /* with no symbol table, fake it */

int line = 1;
int column = 1;
int include_stack_ptr = 0;
int total_includes = 1;
int count_files = 0;
char* actual_token;

struct define_words{
	char name[100];
	char value[1024];	
};

char *files_to_read[100];		//Necesario para el manejo de errores
int lines[100];
int columns[100];
char *curfilename;

int flag_define = 0;
int size_define = 0;
struct define_words record[512];
char *name_def;
char path[128];

void assign_value(char*);

static void commentary(void);
void count_column(void);
%}

%%
"/*"				{commentary();}

<COMMENT>"*/"		{BEGIN INITIAL;}
<COMMENT>([^*]|\n)+|.
<COMMENT><<EOF>>	{printf("Error: Unterminated comment\n");yyterminate();}

"//"				{BEGIN COMMENT_LINE;}
<COMMENT_LINE>.
<COMMENT_LINE>\n	{line++;column = 1;BEGIN INITIAL;}


"auto"					{ }
"break"					{ }
"case"					{ }
"char"					{ }
"const"					{ }
"continue"				{ }
"default"				{ }
"do"					{ }
"double"				{ }
"else"					{ }
"enum"					{ }
"extern"				{ }
"float"					{ }
"for"					{ }
"goto"					{ }
"if"					{ }
"inline"				{ }
"int"					{ }
"long"					{ }
"register"				{ }
"restrict"				{ }
"return"				{ }
"short"					{ }
"signed"				{ }
"sizeof"				{ }
"static"				{ }
"struct"				{ }
"switch"				{ }
"typedef"				{ }
"union"					{ }
"unsigned"				{ }
"void"					{ }
"volatile"				{ }
"while"					{ }
"_Alignas"                              { }
"_Alignof"                              { }
"_Atomic"                               { }
"_Bool"                                 { }
"_Complex"                              { }
"_Generic"                              { }
"_Imaginary"                            { }
"_Noreturn"                             { }
"_Static_assert"                        { }
"_Thread_local"                         { }
"__func__"                              { }


{HP}{H}+{IS}?				{ }
{NZ}{D}*{IS}?				{ }
"0"{O}*{IS}?				{ }
{CP}?"'"([^'\\\n]|{ES})+"'"	{ }

{D}+{E}{FS}?				{ }
{D}*"."{D}+{E}?{FS}?			{ }
{D}+"."{E}?{FS}?			{ }
{HP}{H}+{P}{FS}?			{ }
{HP}{H}*"."{H}+{P}{FS}?			{ }
{HP}{H}+"."{P}{FS}?			{ }

({SP}?\"([^"\\\n]|{ES})*\"{WS}*)+	{ }

"..."					{ }
">>="					{ }
"<<="					{ }
"+="					{ }
"-="					{ }
"*="					{ }
"/="					{ }
"%="					{ }
"&="					{ }
"^="					{ }
"|="					{ }
">>"					{ }
"<<"					{ }
"++"					{ }
"--"					{ }
"->"					{ }
"&&"					{ }
"||"					{ }
"<="					{ }
">="					{ }
"=="					{ }
"!="					{ }
";"					{ }
("{"|"<%")				{ }
("}"|"%>")				{ }
","					{ }
":"					{ }
"="					{ }
"("					{ }
")"					{ }
("["|"<:")				{ }
("]"|":>")				{ }
"."					{ }
"&"					{ }
"!"					{ }
"~"					{ }
"-"					{ }
"+"					{ }
"*"					{ }
"/"					{ }
"%"					{ }
"<"					{ }
">"					{ }
"^"					{ }
"|"					{ }
"?"					{ }

([_a-zA-Z]|{UCN})([_a-zA-Z0-9]|{UCN})* 	{}

"#"[ \t]*define[ \t]+		{BEGIN DEFINITION;}

<DEFINITION>[^ \t]+			{
								BEGIN DEFINITION_VALUE;
							}
							
<DEFINITION_VALUE>[ \t]*\n 		{
									BEGIN INITIAL;
								}

<DEFINITION_VALUE>[^\n]+	{
								BEGIN INITIAL;
							}
<<EOF>>						{
								yyterminate();
							}

[ ]							{}						
[\t]						{}
[\n]						{}
.							{}

%%

int main(int argc, char** argv){
	yyin = fopen(argv[1], "r");
	yylex();
}

int yywrap(void)        /* called at end of input */
{
    return 1;           /* terminate now */
}


void count_column(){
	actual_token = yytext;
	for(int i = 0; yytext[i] != '\0'; i++){
		if(yytext[i] == '\n'){
			line ++;
			column = 1;
		}
		
		else if(yytext[i] == '\t') column += 4;
		else column++;	
	}
}

void assign_value(char* value){
	char result_value[1024];
	char temp[512];
	int size_temp = 0;
	strcpy(result_value, "");
	for(int i = 0; i < (int)strlen(value); i++){
	
		if(value[i] == '_' || isalnum(value[i])){
			temp[size_temp] = value[i];
			temp[size_temp+1] = '\0';
			size_temp++;

		}
		else{
			if(size_temp != 0){
				for(int i = 0; i < size_define; i++){

					
					if(strcmp(record[i].name, temp) == 0){
						strcpy(temp, record[i].value);
						i = 0;
					}
				}
				strcat(result_value,temp);
				strcpy(temp, "");
				size_temp = 0;
				i--;
			}
			else{
				int size_result = (int)strlen(result_value);
				result_value[size_result] = value[i];
				result_value[size_result + 1] = '\0';
			}
		}
	}
	if(size_temp != 0){
		
		for(int i = 0; i < size_define; i++){

			if(strcmp(record[i].name, temp) == 0){
				strcpy(temp, record[i].value);
				i = 0;

			}
		}
		strcat(result_value,temp);
		strcpy(temp, "");
		size_temp = 0;
	}
	strcpy(record[size_define].value, result_value);
}

static void commentary(){
	char c, prev = 0;
	while((c = input()) != EOF){
		if(c == '/' && prev == '*')
			return;
		else if(c == '\n'){
			line++;
			column = 1;
		}
		else if(c == '\t'){
			column += 4;
		}
		else {
			column ++;
		}
		prev = c;
	}
	
	printf("Error: Unterminated comment\n");
	exit(1);
}
