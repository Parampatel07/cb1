// write a programe to find wether given year is millinuem year or not
//1000,2000,3000,4000
#include<stdio.h>
void main()
{
    int year,answer ;
    printf("Enter the year  ");
    scanf("%d",&year);
    //check wheter given year is millinum or not
    answer=year%1000;
    // printf(" answer is %d",answer);
    if(answer==0)
    {
        printf("it is milliumem year");
    }
    else
    {
        printf("it is no milliunem year");
    }
    printf("\nGoodbye..");
}