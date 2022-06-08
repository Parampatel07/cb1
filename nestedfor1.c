#include <stdio.h>
void main()
{
    int row, count = 0;
    for(count=0 ; count<5 ; count++)
    {
        for (row = 0; row <= count; row++)
        {
            printf("* ");
        }
        printf("\n");
    }
}