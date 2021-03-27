#include<stdio.h>
#include<string.h>

int main()
{
    int a[100];
    int i=0;
    int n,even=0,odd=0,val;
    int c;

    FILE *ptr;
    ptr=fopen("nums101.txt","w");
    printf("Enter the value of N:");
    scanf("%d",&n);
    for(i=0;i<n;i++){

                printf("Enter the %d.Number:",i+1);

            scanf("%d",&val);
            //fprintf(ptr,"%3d",val);
            putw(val,ptr);


    }




    fclose(ptr);

    ptr=fopen("nums101.txt","r");

    while((c=getw(ptr))!=EOF)
    {


      printf("value in loop is %d",c);



            if(c%2==0)
            {

                even++;
            }
            else
            {
                odd++;
            }
    }





    fclose(ptr);
    printf("Number of Even :%d and Numbers of Odd  :%d",even,odd);
    return 0;



}

