// write a programe to perform addtion using function
#include<stdio.h>
int getSum(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
void main()
{
    int num1,num2,result;

    printf("Enter value for num1");
    scanf("%d",&num1);

    printf("Enter value for num2");
    scanf("%d",&num2);

    result=getSum(num2,num1);
    printf("result is %d",result);
}