// write a programe to time in hours and minutes
#include<stdio.h>
#include<conio.h>
struct time
{
    int hours;
    float minutes;
}usa,japan;
void main()
{
    char option;
    printf("Enter value for usa time\n");
    printf("Enter usa hours");
    scanf("%d",&usa.hours);
    printf("Enter usa minutes");
    scanf("%f",&usa.minutes);
    printf("Enter value for japan hours");
    scanf("%d",&japan.hours);
    printf("Enter value for japan minutes");
    scanf("%d",&japan.minutes);

    printf("Select any one country\n");
    fflush(stdin);
    printf("1 for usa and 2 for japan ");
    scanf("%c",&option);

    if(option=='u'||option=='U')
    {

    printf("Usa time is %d-%.2f \n",usa.hours,usa.minutes);
    }
    else if (option=='j'||option=='J')
    {
    printf("Japan time is %d-%.2f \n",japan.hours,japan.minutes);
    }
    else
    {
        printf("invalid number");
    }


}