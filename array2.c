#include <stdio.h>
void main()
{
    int students[5], count;

    students[0] = 10;
    students[1] = 20;
    students[2] = 30;
    students[3] = 40;
    students[4] = 50;
    for (count = 0; count < 5; count++)
    {
        printf("marks of student %d is %d \n",count+1,students[count]);
    }
}