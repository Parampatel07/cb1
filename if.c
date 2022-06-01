//write a programe to check a is greater than 50 then print a is greater else print not greater
#include<stdio.h>
void main()
{
    int a;
    // declaration of varaible 
    printf("Enter value of a ");
    scanf("%d",&a);

    //operator
    /*
    < -- less than
    > -- greater than
    == -- double eqaul to 
    != - not equal to
    <= -- less than equal to
    >= -- greater than equal to
    */
//    if(conditon)
//    {
//        code to be run if condition is true
//    }
    if(a>50)
    {
        printf("a is greater than 50\n");       
    }
    else
    {
        printf(" a is less than 50\n");
    }
    printf("\nGoodbye..");
}