// write a programe to make calculator
// 1 - addition
// 2 - subtraction
// 3 - multipilcaton
// 4 - division
#include<stdio.h>
void main()
{
    float number1, number2,answer;
    int option;
    printf("Enter value for number1  ");
    scanf("%f",&number1);
    printf("Enter value for number2  ");
    scanf("%f",&number2);
    printf("Select 1 for addition \n 2 for subtraction \n 3 for multipiaction \n 4 for division");
    printf("\nnow select one from above  ");
    scanf("%d",&option);

    // checking condition < > <= >= == !=
    if(option==1)
    {
        answer=number1+number2;
        printf("\nanswer is %f",answer);
    }
    else if(option==2)
    {
        answer=number1-number2;
        printf("\nanswer is %f",answer);
    }
    else if(option==3)
    {
        answer=number1*number2;
        printf("\nanswer is %f",answer);
    }
    else if(option==4)
    {
        answer=number1/number2;
        printf("\nanswer is %f",answer);
    }
    else
    {
        printf("Invalid number");
    }
    printf("\nGoodbye..");

}