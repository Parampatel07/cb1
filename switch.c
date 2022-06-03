// write a programe to print given two digit number in words
// 59 - five and nine
// 69 -six nine
#include<stdio.h>
void main()
{
    int number,num1,num2;

    printf("enter two digit number");
    scanf("%d",&number);

    num1=number% 10; //[shesh]
    num2=number/10; // bagfal

    printf("num1= %d num2=%d",num1,num2);
    switch(num1)
    {
        case 1:
        printf("One");
        break;
        case 2:
        printf("two");
        break;
        case 3:
        printf("three");
        break;
        case 4:
        printf("Four");
        break;
        case 5:
        printf("five");
        break;
        case 6:
        printf("six");
        break;
        case 7:
        printf("seven");
        break;
        case 8:
        printf("eight");
        break;
        case 9:
        printf("nine");
        break;
        case 0:
        printf("Zero");
        break;
        default:
        printf("invalid input");
        break;
    }
    switch(num2)
    {
        case 1:
        printf("One");
        break;
        case 2:
        printf("two");
        break;
        case 3:
        printf("three");
        break;
        case 4:
        printf("Four");
        break;
        case 5:
        printf("five");
        break;
        case 6:
        printf("six");
        break;
        case 7:
        printf("seven");
        break;
        case 8:
        printf("eight");
        break;
        case 9:
        printf("nine");
        break;
        case 0:
        printf("Zero");
        break;
        default:
        printf("invalid input");
        break;
    }
}