//1,3,5,7,9 - eki sankhiya [odd number]
//2,4,6,8- beki snakhya [even number]
//write a programe to print it is even number if the number is even
#include<stdio.h>
void main()
{
    int number,answer;
    printf("Enter value of number");
    scanf("%d",&number);

    answer=number%2;// answer = user e ape lo number / 2 nu shesh malle
    
    if(answer==0)
    {
        printf("it is Even number beki snakhya");
    }
    else 
    {
        printf("it is odd number eki snakhya");
    }
    printf("\ngoodbye..");
}