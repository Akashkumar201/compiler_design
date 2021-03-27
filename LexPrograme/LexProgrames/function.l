%{
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int i;
%}
%%
i=strlen(yytext);
printf("function is working with i value:%d",i);

%%
int yywrap(){return 1;}
int main(){
printf("Enter string");


yylex();


}