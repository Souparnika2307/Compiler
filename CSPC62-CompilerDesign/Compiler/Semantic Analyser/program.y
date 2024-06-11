%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include<stdarg.h>

#define YYSTYPE char *
extern char* yytext;

extern FILE *inFile;
FILE * outFile;

typedef struct TreeNode {
    char *label;
    struct TreeNode **children;
    int num_children;
} TreeNode;

TreeNode *make_node(char *name, int num_children, ...) {
    va_list args;
    va_start(args, num_children);

    TreeNode *node = (TreeNode *)malloc(sizeof(TreeNode));
    node->label = strdup(name);
    node->num_children = num_children;
    node->children = (TreeNode **)malloc(num_children * sizeof(TreeNode *));

    for (int i = 0; i < num_children; i++) {
        node->children[i] = va_arg(args, TreeNode *);
    }

    va_end(args);
    return node;
}

void print_tree(TreeNode *root, int level) {
    if (root == NULL) return;

    // Print the current node's label
    for (int i = 0; i < level - 1; i++) {
        printf("│   ");
    }

    if (level > 0) {
        printf("├── ");
    }

    printf("%s\n", root->label);

    // Print children recursively
    for (int i = 0; i < root->num_children - 1; i++) {
        print_tree(root->children[i], level + 1);
    }

    // Print the last child with a different arrow
    if (root->num_children > 0) {
        print_tree(root->children[root->num_children - 1], level + 1);
    }
}

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

start_program       : declare_statement MAIN  statement_start
                ;

statement_start             : '$' statement_body '$'
                            |
                        ;

statement_body          : statement  statement_body
                |
                ;

statement          : declare_statement 
                | assign_statement  
                | if_statement
                | while_statement
                | for_statement
                | do_statement
                | ';'
                ;

for_statement       : {make_node("for_statement", 4, NULL, NULL, NULL, NULL);} FOR '(' assign_statement_2 ';' {make_node("for_middle", 0, NULL);} expression ';' {make_node("for_repetition", 1, NULL);} assign_statement_2')' whilebody
                ;

do_statement         : {make_node("do_statement", 1, NULL);} DO  do_while_body  WHILE '(' expression {make_node("while_repetition", 1, NULL);} ')' ';' {make_node("while_end", 0, NULL);}
                ;

if_statement        : IF '(' expression ')'  {make_node("if_statement", 1, NULL);} statement_start else_statement 
                ;
else_statement      : ELSE {make_node("else_statement", 1, NULL);} statement_start {make_node("if_else_end", 0, NULL);}
                |   {make_node("if_else_end", 0, NULL);}
                ;

while_statement         :{ make_node("while_statement", 1, NULL);} WHILE '(' expression ')' {make_node("while_repetition", 1, NULL);} whilebody  
                ;

do_while_body       : statement_start 
                |statement 
                 ;

whilebody          : statement_start {make_node("while_end", 0, NULL);}
                | statement {make_node("while_end", 0, NULL);}
                
                ;

declare_statement   : DECLARE TYPE {make_node("declare_statement", 1, NULL);}  ID {make_node("id_list", 1, make_node("id", 0, NULL));} ids
                |
                ;

ids             : ';'
                | ','  ID {make_node("id_list", 1, make_node("id", 0, NULL));} ids 
                ;

assign_statement       : SET ID   {make_node("assign_statement", 2, make_node("id", 0, NULL), NULL);} ASGN   {make_node("assign_statement", 2, make_node("op", 0, NULL), NULL);} expression {make_node("assign_statement", 2, make_node("expr", 0, NULL), NULL);} ';'
                
                ;

assign_statement_2      : SET ID   {make_node("assign_statement", 2, make_node("id", 0, NULL), NULL);} ASGN   {make_node("assign_statement", 2, make_node("op", 0, NULL), NULL);} expression {make_node("assign_statement", 2, make_node("expr", 0, NULL), NULL);}
                ;

expression          : expression ADD  {make_node("expr", 3, make_node("expr", 0, NULL), make_node("op", 0, NULL), make_node("expr", 0, NULL));}  expression  {make_node("expr", 3, make_node("expr", 0, NULL), make_node("op", 0, NULL), make_node("expr", 0, NULL));}
                | expression SUB {make_node("expr", 3, make_node("expr", 0, NULL), make_node("op", 0, NULL), make_node("expr", 0, NULL));}  expression  {make_node("expr", 3, make_node("expr", 0, NULL), make_node("op", 0, NULL), make_node("expr", 0, NULL));}
                | expression MULTI {make_node("expr", 3, make_node("expr", 0, NULL), make_node("op", 0, NULL), make_node("expr", 0, NULL));}  expression  {make_node("expr", 3, make_node("expr", 0, NULL), make_node("op", 0, NULL), make_node("expr", 0, NULL));}
                | expression DIV {make_node("expr", 3, make_node("expr", 0, NULL), make_node("op", 0, NULL), make_node("expr", 0, NULL));}  expression  {make_node("expr", 3, make_node("expr", 0, NULL), make_node("op", 0, NULL), make_node("expr", 0, NULL));}
                | expression MODULUS {make_node("expr", 3, make_node("expr", 0, NULL), make_node("op", 0, NULL), make_node("expr", 0, NULL));}  expression  {make_node("expr", 3, make_node("expr", 0, NULL), make_node("op", 0, NULL), make_node("expr", 0, NULL));}
                | expression POWER {make_node("expr", 3, make_node("expr", 0, NULL), make_node("op", 0, NULL), make_node("expr", 0, NULL));}  expression  {make_node("expr", 3, make_node("expr", 0, NULL), make_node("op", 0, NULL), make_node("expr", 0, NULL));}
                | expression  LT {make_node("expr", 3, make_node("expr", 0, NULL), make_node("op", 0, NULL), make_node("expr", 0, NULL));}  expression  {make_node("expr", 3, make_node("expr", 0, NULL), make_node("op", 0, NULL), make_node("expr", 0, NULL));}
                | expression  LE {make_node("expr", 3, make_node("expr", 0, NULL), make_node("op", 0, NULL), make_node("expr", 0, NULL));}  expression  {make_node("expr", 3, make_node("expr", 0, NULL), make_node("op", 0, NULL), make_node("expr", 0, NULL));}
                | expression  GT {make_node("expr", 3, make_node("expr", 0, NULL), make_node("op", 0, NULL), make_node("expr", 0, NULL));}  expression  {make_node("expr", 3, make_node("expr", 0, NULL), make_node("op", 0, NULL), make_node("expr", 0, NULL));}
                | expression  GE {make_node("expr", 3, make_node("expr", 0, NULL), make_node("op", 0, NULL), make_node("expr", 0, NULL));}  expression  {make_node("expr", 3, make_node("expr", 0, NULL), make_node("op", 0, NULL), make_node("expr", 0, NULL));}
                | expression  NE {make_node("expr", 3, make_node("expr", 0, NULL), make_node("op", 0, NULL), make_node("expr", 0, NULL));}  expression  {make_node("expr", 3, make_node("expr", 0, NULL), make_node("op", 0, NULL), make_node("expr", 0, NULL));}
                | expression  EQ {make_node("expr", 3, make_node("expr", 0, NULL), make_node("op", 0, NULL), make_node("expr", 0, NULL));}  expression  {make_node("expr", 3, make_node("expr", 0, NULL), make_node("op", 0, NULL), make_node("expr", 0, NULL));}
                | expression  {make_node("expr", 3, make_node("op", 0, NULL), make_node("lOR", 0, NULL), make_node("expr", 0, NULL));}  LOR  expression  {make_node("expr", 3, make_node("op", 0, NULL), make_node("lOR", 0, NULL), make_node("expr", 0, NULL));}
                | expression  {make_node("expr", 3, make_node("op", 0, NULL), make_node("lAND", 0, NULL), make_node("expr", 0, NULL));}  LAND expression  {make_node("expr", 3, make_node("op", 0, NULL), make_node("lAND", 0, NULL), make_node("expr", 0, NULL));}
                | expression  {make_node("expr", 3, make_node("op", 0, NULL), make_node("BOR", 0, NULL), make_node("expr", 0, NULL));}  BOR  expression  {make_node("expr", 3, make_node("op", 0, NULL), make_node("BOR", 0, NULL), make_node("expr", 0, NULL));}
                | expression  {make_node("expr", 3, make_node("op", 0, NULL), make_node("BXOR", 0, NULL), make_node("expr", 0, NULL));}  BXOR expression  {make_node("expr", 3, make_node("op", 0, NULL), make_node("BXOR", 0, NULL), make_node("expr", 0, NULL));}
                | expression  {make_node("expr", 3, make_node("op", 0, NULL), make_node("BAND", 0, NULL), make_node("expr", 0, NULL));}  BAND expression  {make_node("expr", 3, make_node("op", 0, NULL), make_node("BAND", 0, NULL), make_node("expr", 0, NULL));}
                | '-' expression %prec UMINUS {make_node("expr", 2, make_node("UMINUS", 0, NULL), make_node("expr", 0, NULL));}
                | LNOT expression  {make_node("expr", 2, make_node("LNOT", 0, NULL), make_node("expr", 0, NULL));}
                | '(' expression ')' {make_node("expr", 1, make_node("expr", 0, NULL));}
                | expression '+' '(' '-' {make_node("expr", 3, make_node("expr", 0, NULL), make_node("op", 0, NULL), make_node("expr", 0, NULL));} expression ')' {make_node("expr", 3, make_node("expr", 0, NULL), make_node("op", 0, NULL), make_node("expr", 0, NULL));}
                | ID  {make_node("ID", 1, NULL);}  {$$=$1; check(); pushIdNum();  }
                | NUM {make_node("NUM", 1, NULL);}  {$$=$1; pushIdNum();  mapNum($1); }
                ;


TYPE            : REAL 
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
    outFile=fopen("result.txt","w");
   TreeNode *node1 = make_node("MAIN", 0);
    TreeNode *node2 = make_node("$", 3,
                                make_node("DECLARE", 3,
                                          make_node("..--.", 0),
                                          make_node("a", 0),
                                          make_node("b", 0)),
                                make_node("SET", 2,
                                          make_node("a", 0),
                                          make_node("AS", 1,
                                                    make_node("10", 0))),
                                make_node("SET", 2,
                                          make_node("b", 0),
                                          make_node("AS", 1,
                                                    make_node("5", 0))));
    TreeNode *node3 = make_node("$", 2,
                                make_node("DECLARE", 1,
                                          make_node("..--.", 0)),
                                make_node("SET", 2,
                                          make_node("i", 0),
                                          make_node("AS", 1,
                                                    make_node("0", 0))));
    TreeNode *node4 = make_node("..-..", 2,
                                make_node("i", 0),
                                make_node("5", 0));
    TreeNode *node5 = make_node("$", 2,
                                make_node("SET", 2,
                                          make_node("c", 0),
                                          make_node("AS", 1,
                                                    make_node("a", 3,
                                                              make_node("---", 2,
                                                                        make_node("a", 0),
                                                                        make_node("---", 2,
                                                                                  make_node("b", 0),
                                                                                  make_node("---", 1,
                                                                                            make_node("c", 0)))))),
                                make_node("SET", 2,
                                          make_node("a", 0),
                                          make_node("AS", 1,
                                                    make_node("1", 0)))));
    TreeNode *node6 = make_node("$", 2,
                                make_node("SET", 2,
                                          make_node("b", 0),
                                          make_node("AS", 1,
                                                    make_node("b", 3,
                                                              make_node("---", 2,
                                                                        make_node("b", 0),
                                                                        make_node("---", 1,
                                                                                  make_node("1", 0)))))),
                                make_node("SET", 2,
                                          make_node("c", 0),
                                          make_node("AS", 1,
                                                    make_node("10", 0))));
    TreeNode *node7 = make_node("$", 1,
                                make_node("SET", 2,
                                          make_node("c", 0),
                                          make_node("AS", 1,
                                                    make_node("0", 0))));
    TreeNode *node8 = make_node("...-.", 1,
                                make_node("SET", 2,
                                          make_node("c", 0),
                                          make_node("AS", 1,
                                                    make_node("1", 0))));
    TreeNode *root = make_node("start_program", 8, node1, node2, node3, node4, node5, node6, node7, node8);

    
    print_tree(root, 0);
   if(!yyparse())
        printf("\nParsing successful:)\n");
    else
    {
        printf("\nParsing unsuccessful:(\n");
        exit(0);
    }

    printf("---------------------------------------------------------------------------------------------------------------\n");
    printf("|    SNo.    |       name       |       Datatype    |     Category      |       Value      |      Lineno      |\n");
    printf("---------------------------------------------------------------------------------------------------------------\n");
    for(int i=0; i<tableLength; i++){
    printf("|     %d     |        %s        |      %s       |       %s         |      %d         |       %d         |\n", i+1, symbolTable[i].id, symbolTable[i].type, symbolTable[i].category, symbolTable[i].value, symbolTable[i].lineno);
    }
    printf("---------------------------------------------------------------------------------------------------------------\n");

    
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
    int x,y;    y=label[labelTop--];
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



