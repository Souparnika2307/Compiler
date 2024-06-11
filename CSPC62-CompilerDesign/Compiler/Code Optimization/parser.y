%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define YYSTYPE char *
extern char* yytext;

extern FILE *inFile;
FILE * outFile;

%}

%token REAL CHAR STRING BOOL VOID
%token WHILE FOR DO
%token IF ELSE BREAK 
%token NUM ID
%token MAIN DECLARE SET
%token ADD SUB MULTI DIV POWER TRUE_ FALSE_ MODULUS CHAR_CONSTANT CONSTANT


%right ASGN
%left LOR
%left LAND
%left BOR
%left BXOR
%left BAND
%left LNOT
%left EQ NE 
%left LE GE LT GT
%left ADD SUB 
%left MULTI DIV MODULUS
%right POWER
%right UMINUS

%%

start_program		: declare_statement MAIN  statement_start
				;

statement_start 			: '$' statement_body '$'
			|
				;

statement_body			: statement  statement_body
				|
				;

statement 			: declare_statement 
				| assign_statement  
				| if_statement
				| while_statement
				| for_statement
				| do_statement
				| ';'
				;

for_statement		: {forStart();} FOR '(' assign_statement_2 ';' {forMiddle();} expression ';' {forRepetition();} assign_statement_2')' whilebody
				;

do_statement         : {whileStart();} DO  do_while_body  WHILE '(' expression {whileRepetition();} ')' ';' {whileEnd();}
                ;

if_statement 		: IF '(' expression ')'  {ifLabel();} statement_start else_statement 
				;
else_statement		: ELSE {elseLabel();} statement_start {ifElseEndLabel();}
				| 	{ifElseEndLabel();}
				;

while_statement		:{ whileStart();} WHILE '(' expression ')' {whileRepetition();} whilebody  
				;

do_while_body    : statement_start 
                |statement 
                 ;

whilebody		: statement_start {whileEnd();}
				| statement {whileEnd();}
				
				;

declare_statement 	: DECLARE TYPE {setDatatype($2);}  ID {insertIntoSymbolTable("identifier");} ids
				|
				;

ids 			: ';'
				| ','  ID {insertIntoSymbolTable("identifier");} ids 
				;

assign_statement		: SET ID	{pushIdNum(); invokeId();}	ASGN	{pushop("=");}	expression	{ codeGenerateAssign();} ';'
                
                ;

assign_statement_2      : SET ID	{pushIdNum(); invokeId();}	ASGN	{pushop("=");}	expression	{codeGenerateAssign();}
                ;

expression 			: expression ADD	{pushop("+");}  expression  {generateAlgebric(); }
				| expression SUB {pushop("-");}  expression  {generateAlgebric();}
				| expression MULTI {pushop("*");}  expression  {generateAlgebric();}
				| expression DIV {pushop("/");}  expression  {generateAlgebric();}
				| expression MODULUS {pushop("%");}  expression  {generateAlgebric();}
				| expression POWER {pushop("^");}  expression  {generateAlgebric();}
                | expression  LT {pushop("<");}  expression  {generateLogical();}
				| expression  LE {pushop("<=");}  expression  {generateLogical();}
				| expression  GT {pushop(">");}  expression  {generateLogical();}
				| expression  GE {pushop(">=");}  expression  {generateLogical();}
				| expression  NE {pushop("!=");}  expression  {generateLogical();}
				| expression  EQ {pushop("==");}  expression  {generateLogical();}
                | expression  {pushop("||");}  LOR  expression  {generateLogical();}
				| expression  {pushop("&&");}  LAND expression  {generateLogical();}
				| expression  {pushop("|");}  BOR  expression  {generateLogical();}
				| expression  {pushop("XOR");}  BXOR expression  {generateLogical();}
				| expression  {pushop("&");}  BAND expression  {generateLogical();}
				| '-' expression %prec UMINUS {generateUnaryMinus();}
				| LNOT expression  {lNOT_func();}
				| '(' expression ')'
				| expression '+' '(' '-' {pushop('-');} expression ')' {generateAlgebric(); }
				| ID  {$$=$1; check(); pushIdNum();  }
				| NUM {$$=$1; pushIdNum();  mapNum($1); }
				;


				
TYPE			: REAL 
				|CHAR 
				|STRING 
				|BOOL
				;


%%


#include"lex.yy.c"


int count=0;

char stack[1000][10];
int top=0;
int i=0;
char temp[2]="t";

int label[200];
int labelNumber=0;
int labelTop=0;
int stop=0;
char type[10];

char* tempId;

struct Table
{
	char id[20];
	char type[10];
	char category[15];
	int value;
	int lineno;
}symbolTable[10000];

int tableLength=0;

int main(int argc, char *argv[])
{
	yyin = fopen(argv[1], "r");
	outFile=fopen("result_IC.txt","w");

    printf("\n\nRunning for %s :\n\n", argv[1]);
	
   if(!yyparse())
		printf("\nParsing successful:)\n");
	else
	{
		printf("\nParsing unsuccessful:(\n");
		exit(0);
	}

	printf("\nSymbol Table : \n\n");
	printf("---------------------------------------------------------------------------------------------------------------\n");
	printf("|    SNo.    |       name       |       Datatype    |     Category      |       Value      |      Lineno      |\n");
	printf("---------------------------------------------------------------------------------------------------------------\n");
	for(int i=0; i<tableLength; i++){
	printf("|     %d     |        %s        |      %s       |       %s         |      %d         |       %d         |\n", i+1, symbolTable[i].id, symbolTable[i].type, symbolTable[i].category, symbolTable[i].value, symbolTable[i].lineno);
	}
	printf("---------------------------------------------------------------------------------------------------------------\n");

	printf("\n\nCheck the result_IC.txt file for three address code output :D\n\n");
	fclose(yyin);
	fclose(outFile);
	
    return 0;
}
         
yyerror(char *s) {
	printf("Syntex Error in line number : %d : %s %s\n", yylineno, s, yytext );
}
    
pushIdNum()
{
  	strcpy(stack[++top],yytext);
}

pushop(char* optr)
{
  	strcpy(stack[++top],optr);
}

generateLogical()
{
 	sprintf(temp,"t%d",i);
  	fprintf(outFile,"\t%s=%s%s%s\n",temp,stack[top-2],stack[top-1],stack[top]);
  	top-=2;
 	strcpy(stack[top],temp);
 	i++;
}

generateAlgebric()
{
 	sprintf(temp,"t%d",i); // converts temp to reqd format
  	fprintf(outFile,"\t%s=%s%s%s\n",temp,stack[top-2],stack[top-1],stack[top]);
  	top-=2;
 	strcpy(stack[top],temp);
 	i++;
}
codeGenerateAssign()
{
 	fprintf(outFile,"\t%s=%s\n",stack[top-2],stack[top]);
 	top-=3;
}
generateUnaryMinus()
{
   	sprintf(temp,"t%d",i);
   	fprintf(outFile,"\t%s=-%s\n",temp,stack[top]);
   	strcpy(stack[top],temp);
   	i++;
}

lNOT_func()
{
   	sprintf(temp,"t%d",i);
   	fprintf(outFile,"\t%s= not %s\n",temp,stack[top]);
   	strcpy(stack[top],temp);
   	i++;
}

ifLabel()
{
 	labelNumber++;
 	fprintf(outFile,"\tif( not %s)",stack[top]);
 	fprintf(outFile,"\tgoto L%d\n",labelNumber);
 	label[++labelTop]=labelNumber;
}

elseLabel()
{
	int x;
	labelNumber++;
	x=label[labelTop--]; 
	fprintf(outFile,"\tgoto L%d\n",labelNumber);
	fprintf(outFile,"L%d: \n",x); 
	label[++labelTop]=labelNumber;
}

ifElseEndLabel()
{
	int y;
	y=label[labelTop--];
	fprintf(outFile,"L%d: \n",y);
	top--;
}
forStart()
{
	labelNumber++;
	
	fprintf(outFile,"L%d:\n",labelNumber);
}
forMiddle()
{
	labelNumber++;
	label[++labelTop]=labelNumber;
	fprintf(outFile,"L%d:\n",labelNumber);
}
forRepetition()
{
	labelNumber++;
 	fprintf(outFile,"\tif( not %s)",stack[top]);
 	fprintf(outFile,"\tgoto L%d\n",labelNumber);
 	label[++labelTop]=labelNumber;
}
whileStart()
{
	labelNumber++;
	label[++labelTop]=labelNumber;
	fprintf(outFile,"L%d:\n",labelNumber);
}
whileRepetition()
{
	labelNumber++;
 	fprintf(outFile,"\tif( not %s)",stack[top]);
 	fprintf(outFile,"\tgoto L%d\n",labelNumber);
 	label[++labelTop]=labelNumber;
}
whileEnd()
{
	int x,y;	y=label[labelTop--];
	x=label[labelTop--];
	fprintf(outFile,"\tgoto L%d\n",x);
	fprintf(outFile,"L%d: \n",y);
	top--;
}

/* for symbol table*/

check()
{
	char temp[20];
	strcpy(temp,yytext);
	int flag=0;
	for(i=0;i<tableLength;i++)
	{
		if(!strcmp(symbolTable[i].id,temp))
		{
			flag=1;
			break;
		}
	}
	if(!flag)
	{
		yyerror("Variable is not declard");
		exit(0);
	}
}

setDatatype(char* t)
{
	strcpy(type,t);
}


insertIntoSymbolTable(char* category)
{
	char temp[20];
	int i,flag;
	flag=0;
	strcpy(temp,yytext);
	for(i=0;i<tableLength;i++)
	{
		if(!strcmp(symbolTable[i].id,temp))
			{
			flag=1;
			break;
				}
	}
	if(flag)
	{
		yyerror("Redeclare of ");
		exit(0);
	}
	else
	{
		strcpy(symbolTable[tableLength].id,temp);
		strcpy(symbolTable[tableLength].type,type);
		strcpy(symbolTable[tableLength].category,category);
		symbolTable[tableLength].lineno = yylineno;

		tableLength++;
	}
}


void update(char *token,int value)
{
  int flag = 0;
  for(int i = 0;i < tableLength;i++)
  {
    if(!strcmp(symbolTable[i].id,token))
    {
      flag = 1;
      symbolTable[i].value = (int*)malloc(sizeof(int));
      symbolTable[i].value=value;
      return;
    }
  }
  if(flag == 0)
  {
    printf("Error at line %d : %s is not defined\n",8,token);
    exit(0);
  }
}


void invokeId(){
	tempId = strdup(yytext);
}

void mapNum(int val){
	update(tempId, val);
}
