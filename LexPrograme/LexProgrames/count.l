%{
#include<stdio.h>
int u=0,l=0;
%}
%%
[a-z] {printf("lowercase"); l++;}
[A-Z] {printf("uppercase"); u++;}

%%
int yywrap(){return 1;}
int main(){


yylex();
printf("lowercase:%d and uppercase %d:",l,u);
return 0;
}