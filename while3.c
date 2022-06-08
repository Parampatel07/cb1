// 1,3,5,7,9,11,..................16000
#include <stdio.h>
void main()
{
    int number = 1, count = 0,answer=0;
    while(count<100)
    {
        printf("%d ",answer);
        answer = number * number;
        number++;
        count++;
    }
}