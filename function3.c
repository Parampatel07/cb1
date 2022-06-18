//write a programe to peform swap without using third varaible 
#include<stdio.h>
void getSwap(int a,int b)
{
    b=a+b;
    a=b-a;
    b=b-a;
    printf("Value of a=%d and b=%d",a,b);
}
void main()
{
    int num1,num2;

    printf("enter value for num1");
    scanf("%d",&num1);
    printf("enter value for num2");
    scanf("%d",&num2);
    getSwap(num1,num2);
}