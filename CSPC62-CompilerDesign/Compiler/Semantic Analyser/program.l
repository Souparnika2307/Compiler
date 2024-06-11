%{
    #include<string.h>
    #include<stdio.h>
    #define YYSTYPE char *
    extern int id_n=0;
    extern int key_n=0;
    extern int op= 0;
    extern int num_n=0;
%}

letter [a-zA-Z]
digit [0-9]

%%

[ \t]		;
[ \n\n]   { yylineno = yylineno + 1;}

"..--."	    {key_n++;printf("%s - REAL --- KEYWORD\n\n", yytext);yylval="real";return REAL;}
"..---"	    {key_n++;printf("%s - CHAR--- KEYWORD\n\n", yytext);yylval="char";return CHAR;}
".-..-" 	{key_n++;printf("%s - STRING--- KEYWORD\n\n", yytext);yylval="string";return STRING;}
"---.."		{key_n++;printf("%s - BOOL--- KEYWORD\n\n", yytext);yylval="bool"; return BOOL;}

"true"				    {key_n++;printf("%s - TRUE_--- KEYWORD\n\n", yytext);yylval="true"; return TRUE_;}
"false"				    {key_n++;printf("%s - FALSE_--- KEYWORD\n\n", yytext);yylval="false"; return FALSE_;}


".-.-." 	{key_n++;printf("%s - BREAK--- KEYWORD\n\n",yytext);yylval="break";return BREAK;}
".----" {key_n++;printf("%s - VOID--- KEYWORD\n\n", yytext);yylval="void";return VOID;}
"..-.."	{key_n++;printf("%s - WHILE--- KEYWORD\n\n", yytext);yylval="while";return WHILE;}  
"....-"	{key_n++;printf("%s - IF--- KEYWORD\n\n", yytext);yylval="if";return IF;}
"...--"   {key_n++;printf("%s - FOR--- KEYWORD\n\n", yytext);yylval="for";return FOR;}
"...-."		{key_n++;printf("%s - ELSE--- KEYWORD\n\n", yytext);yylval="else";return ELSE;}
".--.."    {key_n++;printf("%s - DO--- KEYWORD\n\n", yytext);yylval="do";return DO;}

"AS"     {key_n++;printf("%s - ASGN--- KEYWORD\n\n", yytext);yylval="assign"; return ASGN;}
"MAIN" {key_n++;printf("%s - MAIN--- KEYWORD\n\n", yytext);return MAIN;}
"DECLARE" {key_n++; printf("%s - DECLARE--- KEYWORD\n\n", yytext);yylval="declare"; return DECLARE;}
"SET" {key_n++;printf("%s - SET--- KEYWORD\n\n", yytext);yylval="set"; return SET;}


"-..."   {op++;printf("%s - LE--- OPERATOR\n\n", yytext);yylval="<=";return LE;}
".---"    {op++;printf("%s - GE--- OPERATOR\n\n",yytext);yylval=">=";return GE;}
"...."    {op++;printf("%s - EQ--- OPERATOR\n\n", yytext);yylval="==";return EQ;}
"--.."    {op++;printf("%s - NE--- OPERATOR\n\n", yytext);yylval="!=";return NE;}
"-..-"	{op++;printf("%s - GT--- OPERATOR\n\n", yytext);yylval=">";return GT;}
"-.-."	{op++;printf("%s - LT--- OPERATOR\n\n", yytext);yylval="<";return LT;}
"---."	 	{op++;printf("%s - LOR--- OPERATOR\n\n", yytext);yylval="||";return LOR;}
"----"  	{op++;printf("%s - LAND--- OPERATOR\n\n", yytext);yylval="&&";return LAND;}
"-.--"	    {op++;printf("%s - LNOT--- OPERATOR\n\n", yytext);yylval="NOT"; return LNOT;}
"---." 	{op++;printf("%s - BOR--- OPERATOR\n\n", yytext);yylval="|";return BOR;}
"--.-"	{op++;printf("%s - BAND--- OPERATOR\n\n", yytext);yylval="&";return BAND;}


"---"			{op++;printf("%s - ADD--- OPERATOR\n\n", yytext);yylval = '+'; return ADD;}
"--."			{op++; printf("%s - SUB--- OPERATOR\n\n", yytext);yylval = "-"; return SUB;}
".-."			{op++; printf("%s - BXOR--- OPERATOR\n\n", yytext);yylval = "xor"; return BXOR;}
"-.-"			{op++;printf("%s - MULTI--- OPERATOR\n\n", yytext);yylval = "*"; return MULTI;}
".--"			{op++;printf("%s - DIV--- OPERATOR\n\n", yytext);yylval = "/"; return DIV;}
"-.." 			{op++;printf("%s - MODULUS--- OPERATOR\n\n", yytext);yylval = "%%"; return MODULUS;}
"..."          { op++; printf("%s - POWER--- OPERATOR\n\n", yytext);yylval = "^"; return POWER;}

{digit}+                        { 
                                    int i,var=0,j=0;
				                    for(i=yyleng-1;i>=0;i--)
				                    {	
				                        var = var +(*(yytext+j)-48)*pow(10,i);
				                        j++;	
				                    }
				                    yylval = var;
                                    printf("%s - NUM--- LITERAL\n\n", yytext);
                                    num_n++;
                                    return NUM;
                                }
            
{letter}({letter}|{digit})*       { 
                                    yylval=strdup(yytext);
                                    id_n++;
                                     printf("%s - ID---IDENTIFIER\n\n", yytext); 
                                    return ID;
                                }



[\']{letter}[\']		{printf("%s - CHAR_CONSTANT---LITERAL\n\n", yytext);return CHAR_CONSTANT;}
[\"]{letter}*[\"]		{printf("%s - CONSTANT---LITERAL\n\n", yytext);return CONSTANT;}
"//"(.)*[\n\n]			{printf("single-line comment\n\n");}
"/"(.|\n\n)"*/"			{printf("multiline comment\n\n");}

.       {return yytext[0];}
%%


// int main(){
//     yyin = fopen("testa.txt", "r");
//     yylex();
//     return 0;
// }