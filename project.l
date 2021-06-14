/* C Declaration */

%{
	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>
	#include<math.h>
	#include "project.tab.h"
	void yyerror(char *);
%}

KEYWORDS iff,elsee,floop,lt,gt,lte,gte,eq,eqeq,neq,fbo,fbc,sbo,sbc,jog,biyog,gun,vag,mod,power,fact,sin,cos,tan,ln,till
BUILTINFUNCTION evenodd,leapyear,isprime,fibonacci,summation,square,cube,posneg
DATATYPE myint,mychar,myfloat,mystring,void mymain
PUNCTUATION sm,cm
header		"import ".*
%%
[#].*					{printf("\nSingle line Comment found : ");ECHO;printf("\n");}
[/][#](.*|\n)*[#][/]			{printf("\nmultiple line Comment found : \n");printf("\n");ECHO;printf("\n");}

[s][h][o][w].*[s][m]			{printf("\n");ECHO;printf("\n");}

[a-z]					{ yylval.itype = *yytext - 'a'; return VARIABLE; }
[0-9]*[.]?[0-9]+			{ yylval.dtype = atof(yytext); return NUMBER ; }
[-][0-9]*[.]?[0-9]+			{ yylval.dtype = atof(yytext); return NUMBER ; }

"myint"					{ return INT; }
"mychar"				{ return CHAR; }
"myfloat"				{ return FLOAT; }
"mystring"				{ return STRING; }

"void mymain"				{ return MAIN; }

"iff"					{ return IF; }
"elsee"					{ return ELSE; }
"whilee"				{ return WHILE; }
"floop"					{ return FOR; }
"swc"					{ return SWITCH; }
"casee"					{ return CASE; }
"brk"					{ return BREAK; }
"contnue"				{ return CONTINUE; }
"default"				{ return DEFAULT; }

"lt"					{ return LT ; }
"gt"					{ return GT ; }
"lte"					{ return LTE ; }
"gte"					{ return GTE ; }
"neq"					{ return NEQ ; }
"eqeq"					{ return EQEQ ; }
"eq"					{ return EQ; }

"ret"					{ return RETURN; }

"fbo"					{ return '('; }
"fbc"					{ return ')'; }
"sbo"					{ return '{'; }
"sbc"					{ return '}'; }

"sm"					{ return ';'; }
"cm"					{ return ','; }

"jog"					{ return '+'; }
"biyog"					{ return '-'; }
"gun"					{ return '*'; }
"vag"					{ return '/'; }
"mod"					{ return '%'; }
"power"					{ return '^'; }

"fact"					{ return FACT; }
"sin"					{ return SIN; }
"cos"					{ return COS; }
"tan"					{ return TAN; }
"ln"					{ return LN; }
"evenodd"				{ return EVENODD; }
"leapyear"				{ return LEAPYEAR; }
"isprime"				{ return ISPRIME; }
"fibonacci"				{ return FIBONACCI; }
"summation"				{ return SUMMATION; }
"square"				{ return SQUARE; }
"cube"					{ return CUBE; }
"takeinput"				{ return READ; }
"writeoutput"			{ return WRITE; }		
"printval"	 			{ return PRINTVAL; } 
"posneg"				{ return POSNEG;}

":"					{ return ':'; }
"inc"					{ return INC ; }
"dec"					{ return DEC ; }
"till"					{ return TILL; }

{header}  				{printf("\nHeader file found : ");ECHO;printf("\n");}
[ \t\n]*				;

.					{yyerror("Unknown Character\n");}

%%
int yywrap(){
	return 1;
}

int main(){
	yyin=freopen("input.txt","r",stdin);
	yyout=freopen("output.txt","w",stdout);
	yyparse();
	return 0;
}
