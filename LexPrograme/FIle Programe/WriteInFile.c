#include<stdio.h>
#include<string.h>

int main(){
    char str[100];

    FILE *ptr;
    ptr=fopen("akash.txt","w");
    printf("Enter the text you want to print");
    gets(str);
    fprintf(ptr,"%s",str);
    fclose(ptr);
    printf("\n Congratualations File Created Successfully");
    return 0;







}
