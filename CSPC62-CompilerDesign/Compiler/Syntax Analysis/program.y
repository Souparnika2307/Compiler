%{
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
extern FILE *yyin;
extern int yylineno ;
int intArr[100];
bool flag = false;

void yyerror(char*);



%}

%token ID
%token CONSTANT
%token FUNC
%token POWER
%token CHAR_CONSTANT
%token SET
%token REAL
%token CHAR
%token STRING
%token BOOLEAN
%token LOOP
%token IF
%token ELSE
%token ELIF
%token CASE
%token DECLARE

%token BREAK
%token RETURN
%token CONTINUE
%token DEFAULT
%token TRUE_
%token FALSE_
%token RELOP
%token OR_RELOP
%token AND_RELOP
%token NOT_RELOP
%token MULOP
%token UNARYOP	
%token START	
%token END	
%token SWITCH
%token NUMBER

%token OUTPUT
%token INPUT
%token SUMOP
%token COMMENT
%token MAIN

%left '+' '-' '^'
%left '*' '/' '%'




%%

program : declarationlist main   
	;

declarationlist: declaration declarationlist 
		| declaration
		;

main: MAIN '$' statementlist '$'
    |
    ;

declaration : function_definition 
	    | variable_declaration
	    ;


function_definition : FUNC datatype ID '(' params ')' '$' statementlist '$'
                ;

variable_declaration : DECLARE datatype  init_dec ';'
                ;

init_dec : ID simpleexpression 		
	        | ID					
	        ;



params : paramlist 
        |
        ;

paramlist: datatype ID 
	    | paramlist ',' datatype ID
        ;

datatype : REAL
	    | CHAR
	    | STRING
	    | BOOLEAN
        ;

expression : SET ID simpleexpression       	  
	   | simpleexpression    
       ;		

simpleexpression : simpleexpression OR_RELOP andexpression   
				| andexpression{$$=$1;} 
                ;

andexpression : andexpression AND_RELOP unaryrelexpression   					
		| unaryrelexpression{$$=$1;}
        ; 


unaryrelexpression : NOT_RELOP unaryrelexpression	       
		| relexpression {$$=$1;}  
        ;

relexpression : relexpression RELOP sumexpression    {  if($2 == 4)
							   {
							   if($1 != $3)
								$$ = true;
						           }

							else if($2 == 5)
							   {
							   if($1 >= $3)
								$$ = true;
							   }

							 else if($2 == 6)
							   {
							   if($1 <= $3)
								$$ = true;
							  }

							 else if($2 == 7)
							   {
							   if($1 > $3)
								$$ = true;
							   }

							 else if($2 == 8)
							   {
							   if($1 < $3)
								$$ = true;
							   }
	
							 else if($2 == 9)
							   {
							   if($1 == $3)
								$$ = true;
							   }
							}
		| sumexpression {$$=$1;}  
        ;

sumexpression : sumexpression SUMOP term	{if($2 == 21)
							{$$ = $1 + $3;}

						    else if($2 == 22)
							{$$ = $1 - $3;}
							else if($2 == 23)
							{$$ = $1 ^ $3;}
							
						 }
		| term 				{$$=$1;}
		;

term : term MULOP unaryexpression		{if($2 == 31)
							{$$ = $1 * $3;}

						  else if($2 == 32)
							{$$ = $1 / $3;}

						  else if($2 == 33)
							{$$ = $1 % $3;}
					         }
	| unaryexpression			{$$=$1;}
    ; 

unaryexpression : SUMOP unaryexpression  {if($1==22)    $$=(-1)*$2;}
		| factor 		   {$$=$1;}
        ;

factor : immutable      {$$=$1;}
	| mutable 	{$$=$1;}
    ;

immutable : ID 		{$$=intArr[$1];}
        ;

mutable : '(' expression ')'    {$$=$2;}
	| CONSTANT		{$$=$1;}
	| call 			
	| NUMBER			{$$=$1;}
	| CHAR_CONSTANT		{$$=$1;}
	| TRUE_			{$$ = $1;}
	| FALSE_		{$$ =$1;}
	;		

call : ID '(' args ')'  {} 
    ; 

args : arglist 		
	|
	;

arglist : arglist ',' expression 
	| expression 
	;

statementlist: statement statementlist
            |statement
            ;

statement : expressionstmt
        | iterationstmt
		| returnstmt     {$$ = $1;}
		| breakstmt      {$$ = $1;}
		| continuestmt   {$$ = $1;}
        | selectionstmt
        | labeledstmt
		| outputstatement  {$$ = $1;}
		| inputstatement   {$$ = $1;}
		| funccallstmt  {$$ = $1;}
        | variable_declaration
	    ;

funccallstmt : SET ID call 
            ;

returnstmt : RETURN ';' 
        | RETURN expression ';'
        ;

breakstmt : BREAK ';'
            ;

continuestmt : CONTINUE ';'
            ;

selectionstmt : IF '(' simpleexpression ')' '$' statementlist '$'
	      | IF '(' simpleexpression ')' '$' statementlist '$' ELSE '$' statementlist '$'
	      | IF '(' simpleexpression ')' '$' statementlist '$' ELIF '(' simpleexpression ')' '$' statementlist '$' ELSE '$' statementlist '$'
	      | SWITCH '(' simpleexpression ')' '$' statementlist '$'
        ;

labeledstmt : CASE '(' simpleexpression ')' '$' statementlist '$' labeledstmt
		| DEFAULT '$' statementlist '$'
		| CASE '(' simpleexpression ')' '$' statementlist '$' 
        ;


iterationstmt : LOOP '(' simpleexpression ')' '$' statementlist '$'		
		;


expressionstmt : expression  ';'  {$$ = $1 ;}
		| ';'
        ;

outputstatement :  OUTPUT '(' outvariable ')'
        ;

outvariable : outvariable ',' value | 
			value {$$=$1;}
		| expression {$$=$1;}
        ;         	

value : ID 			{$$=$1;}
        ; 		 


inputstatement :  SET ID INPUT '(' input_value ')' ';' 
                ;

input_value : CONSTANT {$$ = $1;}
	|
    ;

%%

void yyerror(char *msg)
{
    printf("xxxxxxxxxxxxxxxxxxxxxxx\n");
    printf("invalid string \n");
    printf("xxxxxxxxxxxxxxxxxxxxxxx\n");
	fprintf( stderr, "%s in line %d \n %s", msg, yylineno );
    flag = true;

    exit(0);
}

int main()
{
    FILE *fp;
    fp=fopen("example.txt","r");
    yyin=fp;
    yydebug=1;
    yyparse();
    if(flag == false){
        printf("------------------------------\n");
        printf("Code parsed successfully!!!\n");
        printf("------------------------------\n");
    }
    return 0;
}
