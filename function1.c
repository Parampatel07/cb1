#include<stdio.h>
void PrintLine(int a)
{
    int count=0;
    for(count=0;count<20;count++)
    {
        printf("%d",a);
    }
    printf("\n");
}
void main()
{
    int abc=10;
    PrintLine(abc);
    printf("param patel\n");
    PrintLine(abc);
    printf("The easylearn academy\n");
    PrintLine(abc);
}