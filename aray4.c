#include <stdio.h>
void main()
{
    char name[10];
    int count,copy_count=0;
    printf("Enter your name  ");
    for (count = 0; count < 10; count++)
    {
        scanf("%c",&name[count]);
        copy_count++;
        if(name[count]=='\n')
        {
            break;
        }
    }
    for (count = 0; count < copy_count; count++)
    {
        printf("%c", name[count]);
    }
}