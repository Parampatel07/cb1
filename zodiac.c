// ->Write a program to display zodiac symbol & given zodiac sign from given birth day and month as per following criteria.
// https://in.pinterest.com/pin/81698180718875314/
#include<stdio.h>
void main()
{
    int date,month,sign,symbol;

    printf("Enter your birth date");
    scanf("%d",&date);
    printf("Enter your birth month");
    scanf("%d",&month);

    if((month==3 && date>=21) ||(month==4 && date<=19))
    {
        printf("SIGN is Aries and SYMBOL is The ram");
    }
    else if((month==4 && date>=20) || (month==5 && date<=20))
    {
        printf("SIGN is taurs and SYMBOL is The bull");
    }
    printf("Goodbye...");
    
}