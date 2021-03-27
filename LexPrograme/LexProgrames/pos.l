%{
#include<stdio.h>

int num;
%}
%%
[0-9] {printf("positive number");}
^[-][1-9]+ {printf("Negative number");}

%%
int yywrap(){return 1;}
int main(){
printf("Enter A number:");


yylex();


}