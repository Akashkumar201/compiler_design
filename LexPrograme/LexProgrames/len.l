%{
#include<stdio.h>
#include<string.h>
int i;
%}
%%

i=strlen(yytext);
if(i>5&&i<10)
printf("Aceepted And The length is:%d",i);




%%
int yywrap(){return 1;}
int main(){
printf("Enter string");


yylex();


}