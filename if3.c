//write a programe check if a=5 then give a value 10 esle give value 5
// jo a ma value 10 hoi to 10 kari desu ane 5 sivay bijji koi hoi to 5 kari desu
#include<stdio.h>
void main()
{
    int a;
    printf("enter value of a");
    scanf("%d",&a);
    if(a==5)
    {
        a=10;
        printf("value of a is %d",a);
    }
    else
    {
        a=5;
        printf("value of a is %d",a);
    }
    printf("\n goodbye");
}