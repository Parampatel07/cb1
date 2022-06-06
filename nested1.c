#include <stdio.h>
void main()
{
    int r = 0,c=5;
    while(c>0)
    {
        while (r < c)
        {
            printf("* ");
            r = r + 1;
        }
        printf("\n");
        r = 0;
        c=c-1;
    }
}