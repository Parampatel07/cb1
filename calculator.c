//write a programe to make clacluator
// 1 - plus
//2- minus
//3- multiply
//4- divided
#include<stdio.h>
void main()
{
    int number1,number2,option,result;

    printf("Enter value of number1");
    scanf("%d",&number1);
    printf("enter value of number2");
    scanf("%d",&number2);

    // have puchva nu k su karvu che {option apva na }
    printf("Enter 1 for plus \n Enter 2 for minus \n enter 3 for multiply \n enter 4 for divide");
    printf("\nselect one option");
    scanf("%d",&option);// option select kari sake etla mate scanf

    // < > == != <= >= 
    if(option==1)
    {
        result=number1+number2;
    }
    else if(option==2)
    {
        result=number1-number2;
    }
    else if(option==3)
    {
        result=number1*number2;
    }
    else if(option==4)
    {
        result=number1/number2;
    }
    else
    {
        printf("invalid input");
    }
    printf("reuslt is %d",result);
    printf("goodbye..");
}