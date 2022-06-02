// a,e,i,o,u vowel-swar
// baki vayanjan - consonets
#include <stdio.h>
void main()
{
    char letter;
    printf("Enter letter");
    scanf("%c", &letter);
    if (letter == '0' || letter == '1' || letter == '2' || letter == '3' || letter == '4' || letter == '5' || letter == '6' || letter == '7' || letter == '8' || letter == '9')
    {
        printf("invalid input");
    }
    else
    {
        if (letter == 'a' || letter == 'e')
        {
            printf("it is vowel {swar}");
        }
        else if (letter == 'i' || letter == 'o')
        {
            printf("it is vowel {swar}");
        }
        else if (letter == 'u')
        {
            printf("it is vowel {swar}");
        }
    }
    printf("Goodbye..");
}
