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
	float sym[26];
	int fact(int n){
		int i,sum=1;
		for(i=1;i<=n;i++){
			sum=sum*i;
		}
		return sum;
	}
%}

/* BISON Declaration */
%union { 
  int itype;
  double dtype;   
}

%token <dtype> NUMBER
%token <itype> VARIABLE
%type <dtype> cstatement
%type <dtype> expression
%type <dtype> multiple_case
%type <dtype> mydefault

%token	IF ELSE FOR MAIN INT CHAR FLOAT STRING RETURN BREAK CONTINUE CASE SWITCH DEFAULT PRINTVAL SIN COS TAN LN FACT TILL LT GTE LTE GT EQ EQEQ NEQ INC DEC WHILE READ WRITE EVENODD LEAPYEAR ISPRIME FIBONACCI SUMMATION SQUARE CUBE POSNEG
%right POWER
%left EQ EQEQ NEQ GTE LTE GT LT
%nonassoc INC DEC TILL
%left '+' '-'
%left '*' '/' '%'
%left '^' 
/*Simple grammer rules */

%%

program: MAIN '(' ')' '{' statement '}'  {printf("\nSuccessful Compilation\n");}
	;
statement: /*empty statement*/
	| statement cstatement
	;
cstatement: ';'				{}
	| cdeclaration	';'		{ printf("Declaration\n");}

	| expression ';' 			{
								$$=$1;
							}
	| VARIABLE EQ expression ';'	{
						printf("\nValue of the variable %c : %.2f\n",$1+97,$3);
							sym[$1]=$3;
							$$=$3;
					}

	| READ VARIABLE ';'         {
								printf("\nplease give input for variable %c :",$2+97);
                                float a;
                                scanf("%f",&a);
                                sym[$2] = a;
                            }
    | WRITE  VARIABLE  ';' {
								printf("\nValue of %c is %.2f\n",$2+97,sym[$2]);
                            }

	| FOR '(' expression TILL expression ')' '{' cstatement '}'	{
									int i;
									printf("FOR Loop execution");
									for(i=$3;i<$5;i++){
										printf("Value of the loop: %d ",i);
										printf("expression value: %.2f\n", $8);
									}	
								}
	| WHILE '(' VARIABLE NEQ expression ')' '{' INC VARIABLE ';' '}'  {
	                                printf("\nwhile Loop execution\n");
									int i=(int)sym[$3];
									while(sym[$3]!=(int)$5){
										printf("hello for %d time\n",i);
										i++;
										sym[$3]=sym[$3]+1;
									}
				        }

	| WHILE '(' VARIABLE NEQ expression ')' '{' DEC VARIABLE ';' '}'  {
	                                printf("\nwhile Loop execution\n");
									int i=(int)sym[$3];
									while(sym[$3]!=(int)$5){
										printf("hello for %d time\n",i);
										i--;
										sym[$3]=sym[$3]-1;
									}
				        }
	
	| IF '(' expression ')' '{' cstatement '}' {
								if($3){
									printf("\nvalue of expression in IF: %.2f\n",$6);
								}
								else{
									printf("\ncondition value zero in IF block\n");
								}
							}

	| IF '(' expression ')' '{' cstatement '}' ELSE '{' cstatement '}' {
								if($3){
									printf("value of expression in IF: %.2f\n",$6);
								}
								else{
									printf("value of expression in ELSE: %.2f\n",$10);
								}
							}
	|SWITCH '(' expression ')' '{' multiple_case mydefault '}'
	                        {
							    printf("\n Switch case statement ended \n");
						    }
	| PRINTVAL expression ';' {printf("\nPrinted value of Expression %.2f\n",$2);}
	| EVENODD expression ';'				{
												int a=(int)$2;
												if(a%2)printf("\n%d is odd\n",a);
												else printf("\n%d is even\n",a);
											}
	| LEAPYEAR expression ';'   {
	                            int n = (int)$2;
                                if(((n%4 == 0) && (n%100 != 0)) || (n%400 == 0))
                                    printf("\n%d is leap year\n",n);
                                else
                                    printf("\n%d is not leap year\n",n);
                            }
	| ISPRIME expression ';'	{
								
								int n,i,m=0,flag=0;        
								n=(int)$2;    
								m=n/2;    
								for(i=2;i<=m;i++){    
									if(n%i==0){   
										printf("\n%d is not a prime number\n",n);    
										flag=1;    
										break;    
									}    
								}    
								if(flag==0)printf("\n%d is a prime number\n",n); 
							}
	|FIBONACCI TILL expression ';'	{    
									int n1=0,n2=1,n3,i,number;
									number = (int)$3;
									printf("\nFirst %d fibonacci numbers are: ",number);    
									printf("%d %d",n1,n2);
									for(i=2;i<number;++i)    {    
										n3=n1+n2;    
										printf(" %d",n3);    
										n1=n2;    
										n2=n3;    
									}  
									printf("\n");
 								}
	|SUMMATION TILL expression ';'	{
									int n;
									n=(int)$3;
									int sum=n*(n+1)/2;
									printf("\n The summation of 1 to %d is %d\n",n,sum);
								}
	|INC VARIABLE	';'			{	
										sym[$2]=sym[$2]+1;
										printf("\nvalue incremented \n");
								}
	|DEC VARIABLE  ';'			{
										sym[$2]=sym[$2]-1;
										printf("\nvalue decremented \n");
								}
	|SQUARE expression ';'		{	
									$$=$2*$2;
									int a=(int)$2;
									printf("\nsquare of %d is %d\n",a,a*a);
								}
	|CUBE expression ';'		{
									$$=$2*$2*$2;
									int a=(int)$2;
									printf("\ncube of %d is %d\n",a,a*a*a);
								}
	|POSNEG expression ';'		{
									double num=$2;
									if (num <= 0.0) {
										if (num == 0.0)
											printf("\nYou entered 0\n");
										else
											printf("\nYou entered a negative number.\n");
									} 
									else
										printf("\nYou entered a positive number.\n");
								}
	;
multiple_case:
    multiple_case CASE expression ':' expression ';' { int caseno;caseno=(int)$3;printf("\n value of case %d is %.2f \n",caseno,$5); }
    | CASE expression ':' expression ';'             { int caseno;caseno=(int)$2;printf("\n value of case %d is %.2f \n",caseno,$4); }
    ;

mydefault:
	DEFAULT ':' expression ';'						{ printf("\n value of default is %.2f \n",$3);}
	;
cdeclaration: TYPE ID1  {printf("\nvariable Declaration \n");}
            ;


TYPE:   INT {printf("interger declaration\n");}
      | CHAR {printf("char declaration\n");}
      | FLOAT {printf("float declaration\n");}
      | STRING {printf("string declaration\n");}
      ;

ID1 : ID1 ',' VARIABLE
    |VARIABLE  
    ;
expression: NUMBER				{ $$=$1; }

	
	| VARIABLE				{ $$ = sym[$1]; }

	| expression '+' expression		{ $$ = $1 + $3;printf("\nvalue of addition: %.2f\n", $$); }

	| expression '-' expression		{ $$ = $1 - $3;printf("\nvalue of subtraction: %.2f\n", $$); }

	| expression '*' expression		{ $$ = $1 * $3;printf("\nvalue of multiplication: %.2f\n", $$); }

	| expression '%' expression		{ int a=(int)$1;int b=(int)$3;int c=a%b;$$ = (double) c;printf("\nvalue of modulus: %d\n", a%b); }

	| expression '/' expression	{ 	if($3) 
				  		{
				     		$$ = $1 / $3;
							 printf("\nvalue of division: %.2f\n", $$);
				  		}
				  		else
				  		{
							$$ = 0;
							printf("\ndivision by zero failed to divide\t");
				  		} 	
				    }
    
    | expression '^' expression	               {int val1=(int)$1;int val2=(int)$3; printf("\nvalue of %d power %d: %.2f\n",val1,val2,pow(val1,val2)); }                        

    | FACT '(' expression ')'                   {int val=(int)$3;printf("\nValue of Factorial(%d) is : %d\n",val,fact(val)); $$ = fact($3); } 

    | SIN '(' expression ')'			{int degree=(int)$3;printf("\nValue of Sin(%.d) is : %.2f\n",degree,sin($3*PI/180)); $$=sin($3*PI/180);}

    | COS '(' expression ')'			{int degree=(int)$3;printf("\nValue of Cos(%d) is : %.2f\n",degree,cos($3*PI/180)); $$=cos($3*PI/180); }

    | LN '(' expression ')' 			{int degree=(int)$3;printf("\nValue of Log(%d) is :  %.2f\n",degree,(log($3))); $$=(log($3)); }

    | TAN '(' expression ')'                    {int degree=(int)$3;printf("\nValue of Tan(%d) is : %.2f\n",degree,tan($3*PI/180)); $$=tan($3*PI/180); }

				
    	| expression EQ expression                 	 { $1 =$3; printf("Value of variable: %.2f",$3); }

    	| expression EQEQ expression                      { $$ = ($1 == $3); }

	| expression NEQ expression                      { $$ = ($1 != $3); }

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