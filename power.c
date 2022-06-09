#include <stdio.h>
void main()
{
    int base, exponent, answer, count = 2;
    printf("Enter value for base");
    scanf("%d",&base);
    printf("Enter value for exponent");
    scanf("%d",&exponent);
    answer = base * base;
    do
    {
        count++;
        answer = answer * base;
    } while (count < exponent);
    printf("%d ", answer);
}