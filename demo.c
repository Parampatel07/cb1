#include <stdio.h>
void main()
{
    int r, c, s, count2 = 1, count = 4;
    for (count = 0; count < 5; count++)
    {
        for (c = 0; c < 4; c++)
        {
            printf("_");
        }
        printf("*");
        printf("\n");
    }
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            printf("_");
        }
        printf("*");
        for (s = 0; s < count2; s++)
        {
            printf("_");
        }
        printf("*");
        printf("\n");
        count2 = count2 + 2;
    }
}