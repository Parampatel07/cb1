#include <stdio.h>
void main()
{
    int subject[5], count, sum;
    for (count = 0; count < 5; count++)
    {
        printf("Enter value for subject %d", count + 1);
        scanf("%d", &subject[count]);
    }
    for (count = 0; count < 5; count++)
    {
        printf("\nvalue of subject %d is %d", count + 1, subject[count]);
    }
    sum = 0;
    for (count = 0; count < 5; count++)
    {
        sum = sum + subject[count];
    }
    printf("\nSum =%d", sum);
}