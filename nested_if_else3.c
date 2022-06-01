//write a programe to perform multipilcation if user enter 1 and division if user entre 2
#include<stdio.h>
void main()
{
    int desicion;
    float a,b,result;
    printf("enter value for a");
    scanf("%f",&a);
    printf("Enter value for b");
    scanf("%f",&b);
    printf("Enter 1 for multipilcation and 2 for division");
    scanf("%d",&desicion);

    if(desicion!=1 && desicion!=2)
    {
        printf("Invalid input");
    }
    else
    {
        if(desicion==1)
        {
            result=a*b;
            printf("Value of result variable is %f",result);
        }
        else
        {
            result=(a/b);
            printf("Value of result is %f",result);
        }
    }
    printf("\nGoodbye..");
}