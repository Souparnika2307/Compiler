%{
    #include<string.h>
    #include<stdio.h>
    #define YYSTYPE char *
%}

letter [a-zA-Z]
digit [0-9]

%%

[ \t]		;
[ \n]   { yylineno = yylineno + 1;}

"..--."	    {yylval="real";return REAL;}
"..---"	    {yylval="char";return CHAR;}
".-..-" 	{yylval="string";return STRING;}
"---.."		{yylval="bool"; return BOOL;}

"true"				    {yylval="true"; return TRUE_;}
"false"				    {yylval="false"; return FALSE_;}


".-.-." 	{yylval="break";return BREAK;}
".----" {yylval="void";return VOID;}
"..-.."	{yylval="while";return WHILE;}
"....-"	{yylval="if";return IF;}
"...--"   {yylval="for";return FOR;}
"...-."		{yylval="else";return ELSE;}
".--.."    {yylval="do";return DO;}

"AS"     {yylval="assign"; return ASGN;}
"MAIN" {return MAIN;}
"DECLARE" {yylval="declare"; return DECLARE;}
"SET" {yylval="set"; return SET;}


"-..."   {yylval="<=";return LE;}
".---"    {yylval=">=";return GE;}
"...."    {yylval="==";return EQ;}
"--.."    {yylval="!=";return NE;}
"-..-"	{yylval=">";return GT;}
"-.-."	{yylval="<";return LT;}
"---."	 	{yylval="||";return LOR;}
"----"  	{yylval="&&";return LAND;}
"-.--"	    {yylval="NOT"; return LNOT;}
"---." 	{yylval="|";return BOR;}
"--.-"	{yylval="&";return BAND;}


"---"			{yylval = '+'; return ADD;}
"--."			{yylval = "-"; return SUB;}
".-."			{yylval = "xor"; return BXOR;}
"-.-"			{yylval = "*"; return MULTI;}
".--"			{yylval = "/"; return DIV;}
"-.." 			{yylval = "%%"; return MODULUS;}
"..."          { yylval = "^"; return POWER;}

{digit}+                        { 
                                    int i,var=0,j=0;
				                    for(i=yyleng-1;i>=0;i--)
				                    {	
				                        var = var +(*(yytext+j)-48)*pow(10,i);
				                        j++;	
				                    }
				                    yylval = var;
                                    return NUM;
                                }
            
{letter}({letter}|{digit})*       { 
                                    yylval=strdup(yytext); 
                                    return ID;
                                }



[\']{letter}[\']		{return CHAR_CONSTANT;}
[\"]{letter}*[\"]		{return CONSTANT;}
"//"(.)*[\n]			{printf("single-line comment\n");}
"/*"(.|\n)*"*/"			{printf("multiline comment\n");}

\/\/.* ;
\/\*(.*\n)*.*\*\/ ;
.       return yytext[0];
%%
