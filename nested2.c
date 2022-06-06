// write a program to print multiplication table between given by user
/*
USER= 5
5 X 1 = 5
5 X 2 = 10
5 X 3 = 15
5 X 4 = 20



...10
*/
#include <stdio.h>
void main()
{
    int number, multiplier = 1, answer;

    printf("Enter your table number");
    scanf("%d",&number);
    while (multiplier <=10)
    {
        answer = number * multiplier;
        printf("%d X %d = %d \n", number, multiplier, answer);
        multiplier++;
    }
}