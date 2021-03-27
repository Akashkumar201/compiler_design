#include<stdio.h>
#include<string.h>

int main()
{
    int a[100];
    int i=0;
    int vol,val;

    FILE *ptr;
    ptr=fopen("akash016.txt","w");
    printf("Enter the value of N:");
    scanf("%d",&vol);
    for( i=0;i<vol;i++){
            printf("Enter the %d.Number:",i+1);

            scanf("%d",&val);
            fprintf(ptr,"%3d",val);
    }

    fclose(ptr);
    printf("\n Congratualations File Created Successfully");
    return 0;







}

