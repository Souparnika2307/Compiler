%{
    #include<string.h>
    #include<stdio.h>
#define YYSTYPE char *
%}

alpha [a-zA-Z]
digit [0-9]

%%

[ \t]		{printf("\t");}
[ \n]   {printf("\n");}

"..--."	    { printf(   "REAL  " )     ;}
"..---"	    { printf(   "CHAR  " )     ;}
".-..-" 	{ printf(   "STRING  " )     ;}
"---.."		{ printf(   "BOOL  " )     ;}

"true"				    { printf(   "TRUE_  " )     ;}
"false"				    { printf(   "FALSE_  " )     ;}


".-.-." 	{ printf(   "BREAK  " )     ;}
".----" {printf(   "VOID  " )     ;}
"..-.." 	{printf(   "WHILE  " )     ;}
"....-"	{printf(   "IF  " )     ;}
"...--"   {printf(   "FOR  " )     ;}
"...-."		{printf(   "ELSE  " )     ;}
".--.."    {printf(   "DO  " )     ;}

"AS"     {printf(   "ASGN  " )     ;}
"MAIN" { printf(   "MAIN  " )     ;}
"DECLARE" {  printf(   "DECLARE  " )     ;}
"SET" {  printf(   "SET  " )     ;}
"(" { printf(   " ( " )     ;}
")" { printf(   " ) " )     ;}

"-..."   {printf(   "LE  " )     ;}
".---"    {printf(   "GE  " )     ;}
"...."    {printf(   "EQ  " )     ;}
"--.."    {printf(   "NE  " )     ;}
"-..-"	{printf(   "GT  " )     ;}
"-.-."	{printf(   "LT  " )     ;}
"---."	 	{printf(   "LOR  " )     ;}
"----"  	{printf(   "LAND  " )     ;}
"-.--"	    {  printf(   "LNOT  " )     ;}
"---." 	{printf(   "BOR  " )     ;}
"--.-"	{printf(   "BAND  " )     ;}


"---"			{  printf(   "ADD  " )     ;}
"--."			{  printf(   "SUB  " )     ;}
".-."			{  printf(   "BXOR  " )     ;}
"-.-"			{  printf(   "MULTI  " )     ;}
".--"			{  printf(   "DIV  " )     ;}
"-.." 			{  printf(   "MODULUS  " )     ;}
"..."          {  printf(   "POWER  " )     ;}
"$"             { printf(" $ "); }
","             {printf(" , ");}
";"             {printf(" ; ");}
{digit}+                        { 
                                     printf(   "NUM");
                                }
            
{alpha}({alpha}|{digit})*       { 
                                     printf(   "ID ");
                                }

. {printf("  ERROR  ");};  

%%

int main()
{
yylex();
printf("\n");
} int yywrap(){
return(1);
}
