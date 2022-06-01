#include<stdio.h>
void mian()
{
    int a,b;

    printf("Enter value for a");
    scanf("%d",&a);

    printf("Enter value for b");
    sacnf("%d",&b);

    // if a<10 and b<5 then print valid esle print invalid

    if(a<10)
    {
        if(b<5)
        {
            printf("Valid numbers");
        }
        else
        {
            printf("invalid number");
        }
    }
    else
    {
        printf("Invalid number");
    }

}