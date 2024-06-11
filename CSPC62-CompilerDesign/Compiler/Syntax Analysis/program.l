%{
#include<stdio.h>
#include<math.h>
#include "y.tab.h"

void yyerror(char*);
extern int yylval;
%}
  
letter [a-zA-Z]
digit [0-9]

%%
[ ]				        ;
[\t]				    ;
[\n]				    {yylineno = yylineno + 1;}

"main"                  {return MAIN; }
"func"				    {return FUNC;}		
"-----" 				{return INPUT;}
"..--." 				{return REAL;}
"..---"				    {return CHAR;}
".-..-" 				{return STRING;}
"---.."				{return BOOLEAN;}
"true"				    {return TRUE_;}
"false"				    {return FALSE_;}
"DECLARE"               {return DECLARE;}

"SET"                   { return SET;}


"----"			{ yylval = 1; return AND_RELOP;}  
"---."			{ yylval = 2; return OR_RELOP;}
"-.--"			{ yylval = 3; return NOT_RELOP;}
"--.."			{ yylval = 4; return RELOP;}
".---"			{ yylval = 5; return RELOP;}
"-..."			{ yylval = 6; return RELOP;}
"-..-"			{ yylval = 7; return RELOP;}
"-.-."			{ yylval = 8; return RELOP;}
"...."			{ yylval = 9; return RELOP;}
".--."          { yylval = 10; return POWER;}

"---"			{yylval = 21; return SUMOP;}
"--."			{yylval = 22; return SUMOP;}
".-."			{yylval = 23; return SUMOP;}
"-.-"			{yylval = 31; return MULOP;}
".--"			{yylval = 32; return MULOP;}
"-.." 			{yylval = 33; return MULOP;}

"....-"				{return IF;}
"...-."				{return ELSE;}
".---."				{return CASE;}
"..-.-"				{return SWITCH;}
".-.-."				{return BREAK;}
".-.--"			    {return CONTINUE;}
"-...-" 			{return DEFAULT;}
"...--" 			{return LOOP;}
"--.--"				{return RETURN;}
"....." 			{return OUTPUT;}



{letter}({letter}|{digit})*	{   yylval= *yytext-'a' ;
				                return ID;
				            }

{digit}+		            { 
				                int i,var=0,j=0;
				                for(i=yyleng-1;i>=0;i--)
				                {	
				                    var = var +(*(yytext+j)-48)*pow(10,i);
				                    j++;	
				                }
				                yylval = var;
				                return NUMBER ;
				            }


[\']{letter}[\']		{return CHAR_CONSTANT;}
[\"]{letter}*[\"]		{return CONSTANT;}
"//"(.)*[\n]			{printf("comment\n");}
"/*"(.|\n)*"*/"			{printf("multiline comment\n");}


. 				        {return yytext[0];}

%%

int yywrap(void) {
 return 1;
}