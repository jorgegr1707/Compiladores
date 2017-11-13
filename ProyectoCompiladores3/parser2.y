/*TODO: Modificar todas las reglas que se tienen :vvvvvvvv, imprime todo horrible*/
%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define KRED "\x1B[31m"
#define KNRM "\x1B[0m"

extern int yylex();
extern int yyparse();
extern FILE *yyin;

void yyerror(const char *s);
%}

%union{
	char *sval;
}

%token <sval> IDENTIFIER
%token <sval> I_CONSTANT
%token <sval> F_CONSTANT
%token <sval> STRING_LITERAL
%token <sval> TYPEDEF_NAME
%token <sval> ENUMERATION_CONSTANT

%token	FUNC_NAME SIZEOF
%token	PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token	AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token	SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token	XOR_ASSIGN OR_ASSIGN

%token	TYPEDEF EXTERN STATIC AUTO REGISTER INLINE
%token	CONST RESTRICT VOLATILE
%token	BOOL CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE VOID
%token	COMPLEX IMAGINARY 
%token	STRUCT UNION ENUM ELLIPSIS

%token	CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN

%token	ALIGNAS ALIGNOF ATOMIC GENERIC NORETURN STATIC_ASSERT THREAD_LOCAL

%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE

%error-verbose

%start program
%%
primary_expression
	: IDENTIFIER {pusht($1);}
	| constant
	| string
	| '(' expression ')'
	| generic_selection
	| error
	;

constant
	: I_CONSTANT		/* includes character_constant */
	| F_CONSTANT
	| ENUMERATION_CONSTANT	/* after it has been defined as such */
	;

enumeration_constant		/* before it has been defined as such */
	: IDENTIFIER
	;

string
	: STRING_LITERAL
	| FUNC_NAME
	;

generic_selection
	: GENERIC '(' assignment_expression ',' generic_assoc_list ')'
	;

generic_assoc_list
	: generic_association
	| generic_assoc_list ',' generic_association
	;

generic_association
	: type_name ':' assignment_expression
	| DEFAULT ':' assignment_expression
	;

postfix_expression
	: primary_expression
	| postfix_expression '[' expression ']'
	| postfix_expression '(' ')'
	| postfix_expression '(' argument_expression_list ')'
	| postfix_expression '.' IDENTIFIER
	| postfix_expression PTR_OP IDENTIFIER
	| postfix_expression INC_OP
	| postfix_expression DEC_OP
	| '(' type_name ')' '{' initializer_list '}'
	| '(' type_name ')' '{' initializer_list ',' '}'
	
	| postfix_expression '[' error ']'
	| postfix_expression '(' error ')'
	| '(' type_name ')' '{' error '}'
	| '(' error ')' '{' initializer_list '}'
	| '(' type_name ')' '{' error ',' '}'
	| '(' error ')' '{' initializer_list ',' '}'
	;

argument_expression_list
	: assignment_expression
	| argument_expression_list ',' assignment_expression
	;

unary_expression
	: postfix_expression
	| INC_OP unary_expression
	| DEC_OP unary_expression
	| unary_operator cast_expression
	| SIZEOF unary_expression
	| SIZEOF '(' type_name ')'
	| ALIGNOF '(' type_name ')'
	
	| error cast_expression
	;

unary_operator
	: '&'
	| '*'
	| '+'
	| '-'
	| '~'
	| '!'
	;

cast_expression
	: unary_expression
	| '(' type_name ')' cast_expression
	
	| '(' error ')' cast_expression
	;

multiplicative_expression
	: cast_expression
	| multiplicative_expression '*' cast_expression
	| multiplicative_expression '/' cast_expression
	| multiplicative_expression '%' cast_expression
	;

additive_expression
	: multiplicative_expression
	| additive_expression '+' multiplicative_expression
	| additive_expression '-' multiplicative_expression
	;

shift_expression
	: additive_expression
	| shift_expression LEFT_OP additive_expression
	| shift_expression RIGHT_OP additive_expression
	;

relational_expression
	: shift_expression
	| relational_expression '<' shift_expression
	| relational_expression '>' shift_expression
	| relational_expression LE_OP shift_expression
	| relational_expression GE_OP shift_expression
	;

equality_expression
	: relational_expression
	| equality_expression EQ_OP relational_expression
	| equality_expression NE_OP relational_expression
	;

and_expression
	: equality_expression
	| and_expression '&' equality_expression
	;

exclusive_or_expression
	: and_expression
	| exclusive_or_expression '^' and_expression
	;

inclusive_or_expression
	: exclusive_or_expression
	| inclusive_or_expression '|' exclusive_or_expression
	;

logical_and_expression
	: inclusive_or_expression
	| logical_and_expression AND_OP inclusive_or_expression
	;

logical_or_expression
	: logical_and_expression
	| logical_or_expression OR_OP logical_and_expression
	;

conditional_expression
	: logical_or_expression
	| logical_or_expression '?' expression ':' conditional_expression
	;

assignment_expression
	: conditional_expression 
	| unary_expression assignment_operator assignment_expression
	| unary_expression error assignment_expression
	| error assignment_operator assignment_expression
	;

assignment_operator
	: '='
	| MUL_ASSIGN
	| DIV_ASSIGN
	| MOD_ASSIGN
	| ADD_ASSIGN
	| SUB_ASSIGN
	| LEFT_ASSIGN
	| RIGHT_ASSIGN
	| AND_ASSIGN
	| XOR_ASSIGN
	| OR_ASSIGN
	;

expression
	: assignment_expression
	| expression ',' assignment_expression
	;

constant_expression
	: conditional_expression	/* with constraints */
	;

declaration
	: declaration_specifiers ';'
	| declaration_specifiers init_declarator_list ';'
	| static_assert_declaration
	
	| error ';'
	| error init_declarator_list ';'
	| declaration_specifiers error ';'
	;

declaration_specifiers
	
	: storage_class_specifier declaration_specifiers
	| storage_class_specifier
	| type_specifier declaration_specifiers
	| type_specifier
	| type_qualifier declaration_specifiers
	| type_qualifier
	| function_specifier declaration_specifiers
	| function_specifier
	| alignment_specifier declaration_specifiers
	| alignment_specifier
	| error declaration_specifiers
	| error
	;

init_declarator_list
	: init_declarator
	| init_declarator_list ',' init_declarator
	;

init_declarator
	: declarator '=' initializer
	| declarator
	;

storage_class_specifier
	: TYPEDEF	/* identifiers must be flagged as TYPEDEF_NAME */
	| EXTERN
	| STATIC
	| THREAD_LOCAL
	| AUTO
	| REGISTER
	;

type_specifier
	: VOID
	| CHAR
	| SHORT
	| INT
	| LONG
	| FLOAT
	| DOUBLE
	| SIGNED
	| UNSIGNED
	| BOOL
	| COMPLEX
	| IMAGINARY	  	/* non-mandated extension */
	| atomic_type_specifier
	| struct_or_union_specifier
	| enum_specifier
	| TYPEDEF_NAME		/* after it has been defined as such */
	;

struct_or_union_specifier
	: struct_or_union '{' struct_declaration_list '}'
	| struct_or_union IDENTIFIER '{' struct_declaration_list '}'
	| struct_or_union IDENTIFIER
	
	| struct_or_union error
	;

struct_or_union
	: STRUCT
	| UNION
	;

struct_declaration_list
	: struct_declaration
	| struct_declaration_list struct_declaration
	;

struct_declaration
	: specifier_qualifier_list ';'	/* for anonymous struct/union */
	| specifier_qualifier_list struct_declarator_list ';'
	| static_assert_declaration
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list
	| type_specifier
	| type_qualifier specifier_qualifier_list
	| type_qualifier
	;

struct_declarator_list
	: struct_declarator
	| struct_declarator_list ',' struct_declarator
	;

struct_declarator
	: ':' constant_expression
	| declarator ':' constant_expression
	| declarator
	;

enum_specifier
	: ENUM '{' enumerator_list '}'
	| ENUM '{' enumerator_list ',' '}'
	| ENUM IDENTIFIER '{' enumerator_list '}'
	| ENUM IDENTIFIER '{' enumerator_list ',' '}'
	| ENUM IDENTIFIER
	;

enumerator_list
	: enumerator
	| enumerator_list ',' enumerator
	;

enumerator	/* identifiers must be flagged as ENUMERATION_CONSTANT */
	: enumeration_constant '=' constant_expression
	| enumeration_constant
	;

atomic_type_specifier
	: ATOMIC '(' type_name ')'
	;

type_qualifier
	: CONST
	| RESTRICT
	| VOLATILE
	| ATOMIC
	;

function_specifier
	: INLINE
	| NORETURN
	;

alignment_specifier
	: ALIGNAS '(' type_name ')'
	| ALIGNAS '(' constant_expression ')'
	;

declarator
	: pointer direct_declarator
	| direct_declarator
	;

direct_declarator
	: IDENTIFIER
	| '(' declarator ')'
	| direct_declarator '[' ']'
	| direct_declarator '[' '*' ']'
	| direct_declarator '[' STATIC type_qualifier_list assignment_expression ']'
	| direct_declarator '[' STATIC assignment_expression ']'
	| direct_declarator '[' type_qualifier_list '*' ']'
	| direct_declarator '[' type_qualifier_list STATIC assignment_expression ']'
	| direct_declarator '[' type_qualifier_list assignment_expression ']'
	| direct_declarator '[' type_qualifier_list ']'
	| direct_declarator '[' assignment_expression ']'
	| direct_declarator '(' parameter_type_list ')'
	| direct_declarator '(' ')'
	| direct_declarator '(' identifier_list ')'
	
	| direct_declarator '[' STATIC error assignment_expression ']'
	| direct_declarator '[' STATIC type_qualifier_list error ']'
	| direct_declarator '[' STATIC error ']'
	| direct_declarator '[' error '*' ']'
	| direct_declarator '[' error STATIC assignment_expression ']'
	| direct_declarator '[' type_qualifier_list STATIC error ']'
	| direct_declarator '[' error assignment_expression ']'
	| direct_declarator '[' type_qualifier_list error ']'
	| direct_declarator '[' error ']'
	| direct_declarator '(' error ')'
	;

pointer
	: '*' type_qualifier_list pointer
	| '*' type_qualifier_list
	| '*' pointer
	| '*'
	
	;

type_qualifier_list
	: type_qualifier
	| type_qualifier_list type_qualifier
	;


parameter_type_list
	: parameter_list ',' ELLIPSIS
	| parameter_list
	;

parameter_list
	: parameter_declaration
	| parameter_list ',' parameter_declaration
	;

parameter_declaration
	: declaration_specifiers declarator
	| declaration_specifiers abstract_declarator
	| declaration_specifiers
	;

identifier_list
	: IDENTIFIER
	| identifier_list ',' IDENTIFIER
	;

type_name
	: specifier_qualifier_list abstract_declarator
	| specifier_qualifier_list
	;

abstract_declarator
	: pointer direct_abstract_declarator
	| pointer
	| direct_abstract_declarator
	
	| error direct_abstract_declarator
	;

direct_abstract_declarator
	: '(' abstract_declarator ')'
	| '[' ']'
	| '[' '*' ']'
	| '[' STATIC type_qualifier_list assignment_expression ']'
	| '[' STATIC assignment_expression ']'
	| '[' type_qualifier_list STATIC assignment_expression ']'
	| '[' type_qualifier_list assignment_expression ']'
	| '[' type_qualifier_list ']'
	| '[' assignment_expression ']'
	| direct_abstract_declarator '[' ']'
	| direct_abstract_declarator '[' '*' ']'
	| direct_abstract_declarator '[' STATIC type_qualifier_list assignment_expression ']'
	| direct_abstract_declarator '[' STATIC assignment_expression ']'
	| direct_abstract_declarator '[' type_qualifier_list assignment_expression ']'
	| direct_abstract_declarator '[' type_qualifier_list STATIC assignment_expression ']'
	| direct_abstract_declarator '[' type_qualifier_list ']'
	| direct_abstract_declarator '[' assignment_expression ']'
	| '(' ')'
	| '(' parameter_type_list ')'
	| direct_abstract_declarator '(' ')'
	| direct_abstract_declarator '(' parameter_type_list ')'
	
	| '[' STATIC type_qualifier_list error ']'
	| '[' STATIC error assignment_expression ']'
	| '[' STATIC error ']'
	| '[' error STATIC assignment_expression ']'
	| '[' type_qualifier_list STATIC error ']'
	| '[' error ']'
	| '(' error ')'
	| direct_abstract_declarator '[' STATIC error assignment_expression ']'
	| direct_abstract_declarator '[' STATIC type_qualifier_list error ']'
	| direct_abstract_declarator '[' STATIC error ']'
	| direct_abstract_declarator '[' error assignment_expression ']'
	| direct_abstract_declarator '[' type_qualifier_list error ']'
	| direct_abstract_declarator '[' error STATIC assignment_expression ']'
	| direct_abstract_declarator '[' type_qualifier_list STATIC error ']'
	| direct_abstract_declarator '(' error ')'
	;

initializer
	: '{' initializer_list '}'
	| '{' initializer_list ',' '}'
	| assignment_expression
	;

initializer_list
	: designation initializer
	| initializer
	| initializer_list ',' designation initializer
	| initializer_list ',' initializer
	;

designation
	: designator_list '='
	;

designator_list
	: designator
	| designator_list designator
	;

designator
	: '[' constant_expression ']'
	| '.' IDENTIFIER
	;

static_assert_declaration
	: STATIC_ASSERT '(' constant_expression ',' STRING_LITERAL ')' ';'
	;

statement
	: labeled_statement
	| compound_statement
	| expression_statement
	| selection_statement
	| iteration_statement
	| jump_statement
	;

labeled_statement
	: IDENTIFIER ':' statement
	| CASE constant_expression ':' statement
	| DEFAULT ':' statement
	
	| IDENTIFIER ':' error
	| CASE constant_expression ':' error
	| DEFAULT ':' error
	;

compound_statement
	: '{' '}'
	| '{'  block_item_list '}'
	;

block_item_list
	: block_item
	| block_item_list block_item
	;

block_item
	: declaration
	| statement
	;

expression_statement
	: ';'
	| expression ';'
	;

selection_statement
	: IF '(' expression ')' statement %prec LOWER_THAN_ELSE
	| IF '(' expression ')' statement ELSE statement
	| SWITCH '(' expression ')' statement
	
	| IF '(' error ')' statement ELSE statement	
	| IF '(' expression ')' error ELSE statement
	| IF '(' expression ')' statement ELSE error
	| IF '(' error ')' statement
	| IF '(' expression ')' error
	;

iteration_statement
	: WHILE '(' expression ')' statement
	| DO statement WHILE '(' expression ')' ';'
	| FOR '(' expression_statement expression_statement ')' statement
	| FOR '(' expression_statement expression_statement expression ')' statement
	| FOR '(' declaration expression_statement ')' statement
	| FOR '(' declaration expression_statement expression ')' statement
	
	| WHILE '(' error ')' statement
	| WHILE '(' expression ')' error
	| DO error WHILE '(' expression ')' ';'
	| DO statement WHILE '(' error ')' ';'
	| FOR '(' expression_statement error expression ')' statement
	| FOR '(' expression_statement expression_statement error ')' statement
	| FOR '(' expression_statement expression_statement expression ')' error
	| FOR '(' declaration error expression ')' statement
	| FOR '(' declaration expression_statement error ')' statement
	| FOR '(' declaration expression_statement expression ')' error	
	;

jump_statement
	: GOTO IDENTIFIER ';'
	| CONTINUE ';'
	| BREAK ';'
	| RETURN ';'
	| RETURN expression ';'
	;

program
	: external_declaration
	| program external_declaration
	;

external_declaration
	: function_definition
	| declaration	
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement
	| declaration_specifiers declarator compound_statement
	;

declaration_list
	: declaration
	| declaration_list declaration
	;
%%

extern int column, line, total_includes;
extern char* curfilename;
extern char* actual_token;
char* filename;



struct Node
{
    char tag[5]; 
    char data[100];
    struct Node *next;
    struct Node *previous;
}*head, *tail; 


void pusht(char *value)
{
     struct Node *var,*temp;
     var=(struct Node *)malloc(sizeof(struct Node));
             strncpy(var->tag, "type", sizeof ("type")+1);
             strncpy(var->data, value, sizeof (value));
     if(head==NULL)
     {
          head=var;
          head->previous=NULL;
          head->next=NULL;
          tail=head;
     }
     else
     {
         tail=head;
         while(tail!=NULL)
         {
             temp=tail;
             tail=tail->next;
         }
     tail=var;
     temp->next=tail;
     tail->previous=temp;
     tail->next=NULL;
     }
} 
  
int pop()
{
      struct Node *temp;
      temp=tail;
      if(temp->previous==NULL)
      {
           free(temp);
           head=NULL;
           tail=NULL;
           return 0;
      }
      printf("\nSe borro el siguiente dato: %s \n",tail->data);
      tail=temp->previous;
      tail->next=NULL;
      free(temp);
      return 0;
} 

void imprimir()
{
     struct Node *temp;
     temp=head;
     if(temp==NULL)
      {
         printf("List is Empty");
      }
     while(temp!=NULL)
     {

        printf("%s | %s -> ",temp->tag,temp->data);
        temp=temp->next;
     }
}


int main(int argc, char**argv){
	
	filename = argv[1];
	yyin = fopen(filename,"r");
	
	do{
		yyparse();
	}while(!feof(yyin));

    imprimir();
}

void yyerror(const char *s)
{			
	fflush(stdout);
	char *error = strdup(s);
	int count_words = 1;

	FILE *f;
	char str[1024];
	int actual_column = column - strlen(actual_token);
	if(total_includes == 1){
		f = fopen(filename, "r");
		printf("\n%s:%d:%d:",filename,line,actual_column);
	}
	else{
		f = fopen(curfilename, "r");
		printf("%s:%d:%d:",curfilename,line,actual_column);
	}
	
	
	error = strtok(error, " ");
	while (error != NULL){
		if( count_words <= 2){
			printf("%s%s ",KRED, error);
		}
		else{
			if(!strcmp(error, "IDENTIFIER") || !strcmp(error, "I_CONSTANT") || !strcmp(error, "F_CONSTANT"))
				printf("the %s%s '%s' ", KNRM, error, actual_token);
			else if(!strcmp(error, "IDENTIFIER,") || !strcmp(error, "I_CONSTANT,") || !strcmp(error, "F_CONSTANT,")){
				char type_token[20];
				strcpy(type_token, error);
				type_token[(int)strlen(type_token)-1] = '\0';
				printf("the %s%s '%s', ", KNRM, type_token, actual_token);
			}
			else
				printf("%s%s ",KNRM, error);
		}
		error = strtok(NULL, " ");
		count_words++;
	}
	
	int n_line = 1;
	while(n_line <= line){
		fgets(str, 1024, f);
		n_line += 1;
	}	
	
	printf("\n%s", str);
	
	int n_column = 1;
	while(n_column < column-strlen(actual_token)){
		printf(" ");
		n_column += 1;
	}
	
	printf("^");	
	fclose(f);
	printf("\n");
}

