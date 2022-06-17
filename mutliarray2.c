#include<stdio.h>
void main()
{
    int run[5][5],count,total_count,num[5],average[5];

    for(total_count=0; total_count<5; total_count++)
    {
        printf("Enter the  cricketer %d run\n",total_count+1);

        for(count=0; count<5; count++)
        {
            printf("Enter the match %d run ",count+1);
            scanf("%d",&run[total_count][count]);
        }
    }
    for(total_count=0; total_count<5; total_count++)
    {
        printf("The cricketer %d \n",total_count+1);

        for(count=0; count<5; count++)
        {
            printf("match %d run=%d\n",count+1,run[total_count][count]);
        }
    }
    for(total_count=0; total_count<5; total_count++)
    {
        printf("cricketer %d total run is ",total_count+1);
        num[total_count]=0;
        for(count=0; count<5; count++)
        {
            num[total_count]=num[total_count]+run[total_count][count];
            average[total_count]=num[total_count]/5;
        }
        printf("%d\n",num[total_count]);
        printf("cricketer %d average =%d\n",total_count+1,average[total_count]);
    }
    if(num[0]>num[1],num[0]>num[2],num[0]>num[3],num[0]>num[4])
    {
        printf("Cricketer 1 the highest runer");
    }
    if(num[1]>num[0],num[1]>num[2],num[1]>num[3],num[1]>num[4])
    {
        printf("Cricketer 2 the highest runer");
    }
    if(num[2]>num[1],num[2]>num[0],num[2]>num[3],num[2]>num[4])
    {
        printf("Cricketer 3 the highest runer");
    }
    if(num[3]>num[1],num[3]>num[2],num[3]>num[0],num[3]>num[4])
    {
        printf("Cricketer 4 the highest runer");
    }
    if(num[4]>num[1],num[4]>num[2],num[4]>num[3],num[4]>num[0])
    {
        printf("Cricketer 5 the highest runer");
    }
    else
    {
        printf("not highest");
    }
    printf("\n\n                   (ᇴ‿ฺᇴ)\n\n\n ");
}