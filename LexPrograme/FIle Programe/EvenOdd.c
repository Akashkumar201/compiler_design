#include<stdio.h>
#include<string.h>

int main()
{
    int a[100];
    int i=0;
    int even=0,odd=0;
    int vol;

    FILE *ptr;
    ptr=fopen("akash3.txt","w");
    printf("Enter the value of N:");
    scanf("%d",&vol);
    for( i=0; i<vol; i++)
    {
        printf("Enter the %d.Number:",i+1);

        scanf("%d",&val);
        fprintf(ptr,"%3d",val);
    }

    fclose(ptr);
    ptr=fopen("akash3.txt","r");

    while((c=fgetc(ptr))!=EOF)
    {


        if(c==' ')
        {
            continue;
        }
        else
        {


            if(c%2==0)
            {

                even++;
            }
            else
            {
                odd++;
            }
        }

    }



    fclose(ptr);
    printf("Number of Vowels :%d and Numbers of Consonents  :%d",even,odd);
    return 0;







}
