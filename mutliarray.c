// write a programe to take and print 5subject marks of 5 students
#include <stdio.h>
void main()
{
    int students[5][5], count;

    printf("Enter value for student 1 \n");
    for (count = 0; count < 5; count++)
    {
        printf("Enter marks for %d subject", count + 1);
        scanf("%d", &students[0][count]);
    }
    printf("Enter vale for student 2 \n");
    for (count = 0; count < 5; count++)
    {
        printf("Enter marks for %d subject", count + 1);
        scanf("%d", &students[1][count]);
    }
}