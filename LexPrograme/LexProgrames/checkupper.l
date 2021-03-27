%{
#include<stdio.h>
%}
%%
[a-z] {printf("lowercase");}
[A-Z] {printf("uppercase");}

%%
int yywrap(){return 1;}
int main(){


yylex();
}