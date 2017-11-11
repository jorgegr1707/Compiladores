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
<COMMENT_LINE>\n	{}


"auto"					{}
"break"					{}
"case"					{}
"char"					{}
"const"					{}
"continue"				{}
"default"				{}
"do"					{}
"double"				{}
"else"					{}
"enum"					{}
"extern"				{}
"float"					{}
"for"					{}
"goto"					{}
"if"					{}
"int"					{}
"long"					{}
"register"				{}
"return"				{}
"short"					{}
"signed"				{}
"sizeof"				{}
"static"				{}
"struct"				{}
"switch"				{}
"typedef"				{}
"union"					{}
"unsigned"				{}
"void"					{}
"volatile"				{}
"while"					{}

{HP}{H}+{IS}?				{}
{NZ}{D}*{IS}?				{}
"0"{O}*{IS}?				{}
{CP}?"'"([^'\\\n]|{ES})+"'"	{}

{D}+{E}{FS}?				{}
{D}*"."{D}+{E}?{FS}?			{}
{D}+"."{E}?{FS}?			{}
{HP}{H}+{P}{FS}?			{}
{HP}{H}*"."{H}+{P}{FS}?			{}
{HP}{H}+"."{P}{FS}?			{}

({SP}?\"([^"\\\n]|{ES})*\"{WS}*)+	{}

"..."					{}
">>="					{}
"<<="					{}
"+="					{}
"-="					{}
"*="					{}
"/="					{}
"%="					{}
"&="					{}
"^="					{}
"|="					{}
">>"					{}
"<<"					{}
"++"					{}
"--"					{}
"->"					{}
"&&"					{}
"||"					{}
"<="					{}
">="					{}
"=="					{}
"!="					{}
";"					{}
("{"|"<%")			{}
("}"|"%>")			{}
","					{}
":"					{}
"="					{}
"("					{}
")"					{}
("["|"<:")			{}
("]"|":>")			{}
"."					{}
"&"					{}
"!"					{}
"~"					{}
"-"					{}
"+"					{}
"*"					{}
"/"					{}
"%"					{}
"<"					{}
">"					{}
"^"					{}
"|"					{}
"?"					{}

([_a-zA-Z]|{UCN})([_a-zA-Z0-9]|{UCN})* 	{}

"#"[ \t]*define[ \t]+		{BEGIN DEFINITION;}

<DEFINITION>[^ \t]+			{BEGIN DEFINITION_VALUE;}
							
<DEFINITION_VALUE>[ \t]*\n 		{BEGIN INITIAL;}

<DEFINITION_VALUE>[^\n]+	{BEGIN INITIAL;}
<<EOF>>						{return EOF;}

[ ]							{}						
[\t]						{}
[\n]						{}
.							{count_column();printf("\n%s:%d:%d: Unknown character '%s'\n", files_to_read[total_includes-1],line, column, yytext);}

%%

int main(int argc, char** argv){
	yyin = fopen(argv[1], "r");
	yylex();
}

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
