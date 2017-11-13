%x INCLUDE_CASE INCLUDE_CASE2 COMMENT COMMENT_LINE DEFINITION DEFINITION_VALUE

/*Universal Character Name*/
/*Probablemente quitemos esta cuestion*/
UCN			(\\u[0-9a-fA-F]{4}|\\U[0-9a-fA-F]{8})

D   		[0-9]
L			[a-zA-Z_]

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

#include "parser2.tab.h"

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
static int check_type(void);
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


"auto"					{ count_column();return(AUTO); }
"break"					{ count_column();return(BREAK); }
"case"					{ count_column();return(CASE); }
"char"					{ count_column();return(CHAR); }
"const"					{ count_column();return(CONST); }
"continue"				{ count_column();return(CONTINUE); }
"default"				{ count_column();return(DEFAULT); }
"do"					{ count_column();return(DO); }
"double"				{ count_column();return(DOUBLE); }
"else"					{ count_column();return(ELSE); }
"enum"					{ count_column();return(ENUM); }
"extern"				{ count_column();return(EXTERN); }
"float"					{ count_column();return(FLOAT); }
"for"					{ count_column();return(FOR); }
"goto"					{ count_column();return(GOTO); }
"if"					{ count_column();return(IF); }
"int"					{ count_column();return(INT); }
"long"					{ count_column();return(LONG); }
"register"				{ count_column();return(REGISTER); }
"return"				{ count_column();return(RETURN); }
"short"					{ count_column();return(SHORT); }
"signed"				{ count_column();return(SIGNED); }
"sizeof"				{ count_column();return(SIZEOF); }
"static"				{ count_column();return(STATIC); }
"struct"				{ count_column();return(STRUCT); }
"switch"				{ count_column();return(SWITCH); }
"typedef"				{ count_column();return(TYPEDEF); }
"union"					{ count_column();return(UNION); }
"unsigned"				{ count_column();return(UNSIGNED); }
"void"					{ count_column();return(VOID); }
"volatile"				{ count_column();return(VOLATILE); }
"while"					{ count_column();return(WHILE); }

{HP}{H}+{IS}?				{ yylval.sval = strdup(yytext);count_column();return I_CONSTANT; }
{NZ}{D}*{IS}?				{ yylval.sval = strdup(yytext);count_column();return I_CONSTANT; }
"0"{O}*{IS}?				{ yylval.sval = strdup(yytext);count_column();return I_CONSTANT; }
{CP}?"'"([^'\\\n]|{ES})+"'"	{ yylval.sval = strdup(yytext);count_column();return I_CONSTANT; }

{D}+{E}{FS}?				{ yylval.sval = strdup(yytext);count_column();return F_CONSTANT; }
{D}*"."{D}+{E}?{FS}?			{ yylval.sval = strdup(yytext);count_column();return F_CONSTANT; }
{D}+"."{E}?{FS}?			{ yylval.sval = strdup(yytext);count_column();return F_CONSTANT; }
{HP}{H}+{P}{FS}?			{ yylval.sval = strdup(yytext);count_column();return F_CONSTANT; }
{HP}{H}*"."{H}+{P}{FS}?			{ yylval.sval = strdup(yytext);count_column();return F_CONSTANT; }
{HP}{H}+"."{P}{FS}?			{ yylval.sval = strdup(yytext);count_column();return F_CONSTANT; }

({SP}?\"([^"\\\n]|{ES})*\"{WS}*)+	{yylval.sval = strdup(yytext);count_column();return STRING_LITERAL; }

"..."					{ count_column();return ELLIPSIS; }
">>="					{ count_column();return RIGHT_ASSIGN; }
"<<="					{ count_column();return LEFT_ASSIGN; }
"+="					{ count_column();return ADD_ASSIGN; }
"-="					{ count_column();return SUB_ASSIGN; }
"*="					{ count_column();return MUL_ASSIGN; }
"/="					{ count_column();return DIV_ASSIGN; }
"%="					{ count_column();return MOD_ASSIGN; }
"&="					{ count_column();return AND_ASSIGN; }
"^="					{ count_column();return XOR_ASSIGN; }
"|="					{ count_column();return OR_ASSIGN; }
">>"					{ count_column();return RIGHT_OP; }
"<<"					{ count_column();return LEFT_OP; }
"++"					{ count_column();return INC_OP; }
"--"					{ count_column();return DEC_OP; }
"->"					{ count_column();return PTR_OP; }
"&&"					{ count_column();return AND_OP; }
"||"					{ count_column();return OR_OP; }
"<="					{ count_column();return LE_OP; }
">="					{ count_column();return GE_OP; }
"=="					{ count_column();return EQ_OP; }
"!="					{ count_column();return NE_OP; }
";"					{ count_column();return ';'; }
("{"|"<%")				{ count_column();return '{'; }
("}"|"%>")				{ count_column();return '}'; }
","					{ count_column();return ','; }
":"					{ count_column();return ':'; }
"="					{ count_column();return '='; }
"("					{ count_column();return '('; }
")"					{ count_column();return ')'; }
("["|"<:")				{ count_column();return '['; }
("]"|":>")				{ count_column();return ']'; }
"."					{ count_column();return '.'; }
"&"					{ count_column();return '&'; }
"!"					{ count_column();return '!'; }
"~"					{ count_column();return '~'; }
"-"					{ count_column();return '-'; }
"+"					{ count_column();return '+'; }
"*"					{ count_column();return '*'; }
"/"					{ count_column();return '/'; }
"%"					{ count_column();return '%'; }
"<"					{ count_column();return '<'; }
">"					{ count_column();return '>'; }
"^"					{ count_column();return '^'; }
"|"					{ count_column();return '|'; }
"?"					{ count_column();return '?'; }

([_a-zA-Z]|{UCN})([_a-zA-Z0-9]|{UCN})* 	{
											char *result;
											int i = 0;
											result = yytext;
											
											for(i; i < size_define; i++){

												if(strcmp(result, record[i].name) == 0){
													strcpy(result, record[i].value);
													bp = YY_CURRENT_BUFFER;
													YY_BUFFER_STATE n = yy_scan_string(result);
													yy_switch_to_buffer(bp);
													yypush_buffer_state(n);
													files_to_read[total_includes] = "string";
													total_includes++;
													line++;
													break;
												}
											}

											if(i == size_define){
												count_column();
												yylval.sval = strdup(result);
												return check_type();
											}
										}

"#"[ \t]*include[ \t]*[\"]	{BEGIN INCLUDE_CASE2;}

<INCLUDE_CASE2>[^\t\n\>]+	{
								{
									int c;
									while((c = input()) && c != '\n');
								}
								yylineno++;
								/*if(include_stack_ptr >= MAX_INCLUDE_DEPTH){
									fprintf(stderr, "Includes nested too deeply");
									exit(1);
								}*/
								
								strcpy(path,PATH);
								strcat(path, yytext);
								
								
								//include_stack[include_stack_ptr++] = YY_CURRENT_BUFFER;
								FILE *f = fopen(path,"r");
								if(!f){
									printf("\nInclude file '%s' does not exist\n", yytext);
									line++;
								}
								else{
								//yy_switch_to_buffer(yy_create_buffer ( yyin, YY_BUF_SIZE));
									char command[100];
									strcpy(command, "./preprocess ");
									strcat(command, path);
									system(command);
									
								}
								BEGIN INITIAL;
							}


"#"[ \t]*include[ \t]*[\"]	{BEGIN INCLUDE_CASE;}

<INCLUDE_CASE>[^\t\n\"]+	{
								{
									int c;
									while((c = input()) && c != '\n');
								}
								yylineno++;
								/*if(include_stack_ptr >= MAX_INCLUDE_DEPTH){
									fprintf(stderr, "Includes nested too deeply");
									exit(1);
								}*/
								
								strcpy(path,PATH);
								strcat(path, yytext);
								
								
								//include_stack[include_stack_ptr++] = YY_CURRENT_BUFFER;
								FILE *f = fopen(path,"r");
								if(!f){
									printf("\nInclude file '%s' does not exist\n", yytext);
									line++;
								}
								else{
								//yy_switch_to_buffer(yy_create_buffer ( yyin, YY_BUF_SIZE));
									files_to_read[total_includes++] = path;
									curfilename = path;
									lines[count_files] = line;
									columns[count_files] = column;
									count_files++;
									line = 1;
									column = 1;
									yyin = fopen(path, "r");	
									yypush_buffer_state(yy_create_buffer(yyin, YY_BUF_SIZE));
								}
								BEGIN INITIAL;
							}

"#"[ \t]*define[ \t]+		{BEGIN DEFINITION;}

<DEFINITION>[^ \t]+			{
								{
									int c;
									while((c = input()) && c != ' ');
								}
								name_def = yytext;
								BEGIN DEFINITION_VALUE;
							}
							
<DEFINITION_VALUE>[ \t]*\n 		{
									int i = 0;
									for(i; i < size_define; i++){
										if(strcmp(record[i].name, name_def) == 0){
											strcpy(record[i].value, " ");
											break;
										}
									}

									if(i == size_define){
										strcpy(record[size_define].name, name_def);
										strcpy(record[size_define].value, " ");
										size_define++;
									}
									line ++;
									BEGIN INITIAL;
								}

<DEFINITION_VALUE>[^\n]+	{
								int i = 0;
								for(i; i < size_define; i++){
									if(strcmp(record[i].name, name_def) == 0){
										strcpy(record[i].value, yytext);
										break;
									}
								}

								if(i == size_define){
									strcpy(record[size_define].name, name_def);
									assign_value(yytext);
									size_define++;
								}
								BEGIN INITIAL;
							}
<<EOF>>						{
								yypop_buffer_state();
								flag_define = 0;
								
								for(int i = total_includes - 1; i > 0; i--){
									
									if(strcmp(files_to_read[i], "string") != 0){
										curfilename = files_to_read[i];
										count_files--;
										line = lines[count_files];
										line += 1;
										column = columns[count_files];
										break;
									}
								}
								total_includes--;
								if(!YY_CURRENT_BUFFER)yyterminate();
								/*if(flag_define){
									flag_define = 0;
									yy_delete_buffer(bp);
								}
								if(--include_stack_ptr < 0){
									yyterminate();
								}
								else{
									--count_files;
									yy_delete_buffer(YY_CURRENT_BUFFER);
									yy_switch_to_buffer(include_stack[include_stack_ptr]);
								}*/
							}

[ ]							{count_column();/*printf(" ");*/}						
[\t]						{count_column();/*printf("\t");*/}
[\n]						{count_column();/*printf("\n");*/}
.							{count_column();printf("\n%s:%d:%d: Unknown character '%s'\n", files_to_read[total_includes-1],line, column, yytext);}

%%

/*int main(int argc, char** argv){
	yyin = fopen(argv[1], "r");
	files_to_read[count_files++] = argv[1];
	yylex();
}*/

int yywrap(void)        /* called at end of input */
{
    return 1;           /* terminate now */
}

static int check_type(void)
{
    switch (sym_type(yytext))
    {
    case TYPEDEF_NAME:                /* previously defined */
        return TYPEDEF_NAME;
    case ENUMERATION_CONSTANT:        /* previously defined */
        return ENUMERATION_CONSTANT;
    default:                          /* includes undefined */
        return IDENTIFIER;
    }
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
