// 1,4,9,16,25,36................8000.
#include <stdio.h>
void main()
{
    int number = 1, answer;
    // printf("%d ", number);
    do
    {
        answer = number * number;
        printf("%d ", answer);
        number++;
    }while(answer<8000);
}