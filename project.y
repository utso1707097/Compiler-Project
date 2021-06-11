/*C Declaration */

%{
	#include<stdio.h>
	#include<stdlib.h>
	#include<math.h>
	#include<malloc.h>
	#include<string.h>
	#define PI 3.14159265
	void yyerror(char *);
	int yylex(void);
	int sym[26];
	int fact(int n){
		int i,sum=1;
		for(i=1;i<=n;i++){
			sum=sum*i;
		}
		return sum;
	}
%}

/* BISON Declaration */

%token	NUMBER,VARIABLE,IF,ELSE,FOR,MAIN,INT,CHAR,FLOAT,STRING,RETURN,BREAK,CONTINUE,CASE,SWITCH,DEFAULT,PRINTFUNCTION,SIN,COS,TAN,LN,FACT,TILL,LT,GTE,LTE,GT,EQ,EQEQ,NEQ,INC,DEC,WHILE
%nonassoc IFX
%nonassoc ELSE
%left eq
%left '<' '>'
%left '+' '-'
%left '*' '/' '%'
%right FACT
%left '^'

/*Simple grammer rules */

%%

program: MAIN '(' ')' '{' statement '}'  {printf("\nSuccessful Compilation\n");}
	;
statement: /*empty statement*/
	| statement cstatement
	;
cstatement: ';'
	| cdeclaration	';'		{ printf("Declaration\n");}

	| expression ';' 			{
								$$=$1;
							}
	| VARIABLE EQ expression ';'	{
						printf("\nValue of the variable %c : %d\n",$1,$3);
							sym[$1]=$3;
							$$=$3;
					}
	| FOR '(' expression TILL expression ')' '{' cstatement '}'	{
									int i;
									printf("FOR Loop execution");
									for(i=$3;i<$5;i++){
										printf("Value of the loop: %d ",i);
										printf("expression value: %d\n", $8);
									}	
								}
	| WHILE '(' expression TILL expression ')' '{' cstatement '}'  {
	                                int i;
	                                printf("WHILE Loop execution");
	                                for(i=$3;i<$5;i++) {printf("\nvalue of the loop: %d expression value: %d\n", i,$8);}		
				        }
	



	| SWITCH '(' NUMBER ')' '{'  CASE '}' {
		printf("\nSWITCH CASE Declaration\n");
		printf("\nFinally Choose Case number :-> %d\n",$3);
	}
                                                   
	
	| IF '(' expression ')' '{' cstatement '}' %prec IFX {
								if($3){
									printf("\nvalue of expression in IF: %d\n",$6);
								}
								else{
									printf("\ncondition value zero in IF block\n");
								}
							}

	| IF '(' expression ')' '{' cstatement '}' ELSE '{' cstatement '}' {
								if($3){
									printf("value of expression in IF: %d\n",$6);
								}
								else{
									printf("value of expression in ELSE: %d\n",$10);
								}
							}

	| PRINTFUNCTION '(' expression ')' ';' {printf("\nPrint Expression %d\n",$3);}
	;
	
cdeclaration: TYPE ID1  {printf("\nvariable Dection\n");}
            ;


TYPE:   INT {printf("interger declaration\n");}
      | CHAR {printf("float declaration\n");}
      | FLOAT {printf("char declaration\n");}
      | STRING {printf("string declaration\n");}
      ;

ID1 : ID1 ',' VARIABLE
    |VARIABLE  
    ;

SWITCHCASE: casegrammer
 			|casegrammer defaultgrammer
 			;

 casegrammer: /*empty*/
 			| casegrammer casenumber
 			;

 casenumber: CASE NUMBER ':' expression ';' {printf("Case No : %d & expression value :%d \n",$2,$4);}
 			;
 defaultgrammer: DEFAULT ':' expression ';' {
 				printf("\nDefault case & expression value : %d",$3);
 			}
 		;

expression: NUMBER				{ $$=$1; }

	
	| VARIABLE				{ $$ = sym[$1]; }

	| expression '+' expression		{ $$ = $1 + $3;printf("\nvalue of addition: %d\n", $$); }

	| expression '-' expression		{ $$ = $1 - $3;printf("\nvalue of subtraction: %d\n", $$); }

	| expression '*' expression		{ $$ = $1 * $3;printf("\nvalue of multiplication: %d\n", $$); }

	| expression '%' expression		{ $$ = $1 % $3;printf("\nvalue of modulus: %d\n", $$); }

	| expression '/' expression	{ 	if($3) 
				  		{
				     		$$ = $1 / $3;
							 printf("\nvalue of division: %d\n", $$);
				  		}
				  		else
				  		{
							$$ = 0;
							printf("\ndivision by zero failed to divide\t");
				  		} 	
				    }
    
    | expression '^' expression	               { $$ = pow($1,$3);printf("\nvalue of %d power %d: %d\n",$1,$3,$$); }                        

    | FACT '(' expression ')'                   {printf("\nValue of Factorial(%d) is : %d\n",$3,fact($3)); $$ = fact($3); } 

    | SIN '(' expression ')'			{printf("\nValue of Sin(%d) is : %lf\n",$3,sin($3*PI/180)); $$=sin($3*PI/180);}

    | COS '(' expression ')'			{printf("\nValue of Cos(%d) is : %lf\n",$3,cos($3*PI/180)); $$=cos($3*PI/180); }

    | LN '(' expression ')' 			{printf("\nValue of Log(%d) is : %lf\n",$3,(log($3))); $$=(log($3)); }

    | TAN '(' expression ')'                    {printf("\nValue of Cos(%d) is : %lf\n",$3,tan($3*PI/180)); $$=tan($3*PI/180); }

				
    	| expression EQ expression                 	 { sym[$1] = sym[$3]; printf("Value of variable: %d",sym[$3]); }

    	| expression EQEQ expression                      { $$ = (sym[$1] == sym[$3]); }

	| expression NEQ expression                      { $$ = (sym[$1] != sym[$3]); }

	| expression LT expression	                     { $$ = ($1 < $3); }
	
	| expression LTE expression	                     { $$ = ($1 <= $3); }

	| expression GT expression	                     { $$ = ($1 > $3); }
	
	| expression GTE expression	                     { $$ = ($1 >= $3); }

	| '(' expression ')'		                     { $$ = $2;	}
	
	;
%%

void yyerror(char *s) {
fprintf(stderr, "%s\n", s);
}