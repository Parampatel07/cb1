// write a programe to take and print 5subject marks of 5 students
#include<stdio.h>
void main()
{
    int students[5][5], count, total_count, total[5], total_total;
    float average;
    for (total_count = 0; total_count < 5; total_count++)
    {
        printf("Enter value for student %d \n", total_count + 1);
        for (count = 0; count < 5; count++)
        {
            printf("Enter marks for %d subject ", count + 1);
            scanf("%d", &students[total_count][count]);
        }
    }
    for (total_count = 0; total_count < 5; total_count++)
    {
        printf("Marks of student %d are \n", total_count + 1);
        for (count = 0; count < 5; count++)
        {
            printf("subject %d=%d \n", count + 1, students[total_count][count]);
        }
    }
    for (total_count = 0; total_count < 5; total_count++)
    {
        total[total_count] = 0;
        for (count = 0; count < 5; count++)
        {
            total[total_count] = total[total_count] + students[total_count][count];
        }
        printf("Total of student %d is %d \n", total_count + 1, total[total_count]);
    }
    total_total = 0;
    for(count=0;count<5;count++)
    {
        total_total = total_total + total[count];
    }
    printf("Total of total is %d",total_total);
    average=total_total/5;
    printf("Average is %f",average);
}