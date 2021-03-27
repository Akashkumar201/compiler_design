#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    char c;
    int vol=0;
    int cont=0;

    FILE *ptr;
    ptr=fopen("akash016.txt","w");
    printf("Enter the text you want to print:");
    gets(str);
    fprintf(ptr,"%s",str);
    fclose(ptr);
    ptr=fopen("akash016.txt","r");

    while((c=fgetc(ptr))!=EOF)
    {


        if(c==' ')
        {
            continue;
        }
        else
        {


            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            {

                vol++;
            }
            else
            {
                cont++;
            }
        }

    }



    fclose(ptr);
    printf("Number of Vowels :%d and Numbers of Consonents  :%d",vol,cont);
    return 0;







}
