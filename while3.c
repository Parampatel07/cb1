// 1,3,5,7,9,11,..................16000
#include <stdio.h>
void main()
{
    int number = 1, count = 0;
    while(count<8000)
    {
        printf("%d ", number);
        number = number + 2;
        count++;
    }
}