// write a program to print following series (triangular numbers)
// 0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55 ... 1000
// answer= 1/2(n-1)(n)
#include <stdio.h>
void main()
{
    int number = 1, answer=0;
    for (number = 1; answer < 990; number = number + 1)
    {
        answer = ((number - 1) * number) / 2;
        printf("%d ", answer);
    }
    printf("Goodbye...");
}
