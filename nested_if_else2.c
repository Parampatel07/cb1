// write a programe to perform addtion if user enter 1 and subtratction if user enter's 2
#include<stdio.h>
void main()
{
    int a ,b,desicion,result;
     
    printf("Enter value for a");
    scanf("%d",&a);
    printf("Enter value for b");
    scanf("%d",&b);
    printf("enter 1 for addttion and 2 for subtraction");
    scanf("%d",&desicion);

    if(desicion==1 || desicion==2)
    {
        // printf("hiee i am here");
        if(desicion==1)
        {
            result=a+b;
            printf("Answer is %d\n",result);
        }
        else
        {
            result=a-b;
            printf("Answer is %d\n",result);
        }
    }
    else
    {
        printf("invalid desicion");
    }
    printf("goodbye..");
}