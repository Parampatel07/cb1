// NESTED IF DESICION MAKING STATEMENT
// write a programe to find simple intrest
// take monthly income[1 maihna no pagar]
// find yearly income [ek varas na ]
// hav jo eno varas no pagar
// jo eno pagar  1,00,000 thi ocho hoi to --- 5% sadu vyag
// jo eno pagar 1,00,000 thi vadhera ane 5,00,000 thi ocho  hoi ane to --- 20% sadu vyag
// 5,00,00 thi vadhare  ane 10,00,000 to -- 30%
// 10,00,000 thi vadhare ane 50,00,000 -- 40%
// 5000000 vadhare hoi to 50%
// akha varas no pagar vyag sathe
/*
&& - and (ane) [bane sachi hoi to j true return kare]
|| - or (athva) [be ma thi koi pn ek sachio to]

*/
#include <stdio.h>
void main()
{
    int mi, yi;
    float intrest;
    printf("Value of monthly income");
    scanf("%d", &mi);
    if (mi > 5000000)
    {
        printf("invalid input");
    }
    else
    {
        yi = mi * 12;
        printf(" yearly income = %d", yi);
        if (yi < 100000)
        {
            intrest = (yi * 5) / 100;
        }
        else if (yi > 100000 && yi < 500000)
        {
            intrest = (yi * 20) / 100;
        }
        else if (yi > 500000 && yi < 1000000)
        {
            intrest = (yi * 30) / 100;
        }
        else if (yi > 1000000 && yi < 5000000)
        {
            intrest = (yi * 40) / 100;
        }
        else
        {
            intrest = (yi * 50) / 100;
        }
        printf(" intrest is %f", intrest);
    }
    printf("\nGoodbyee..");
}