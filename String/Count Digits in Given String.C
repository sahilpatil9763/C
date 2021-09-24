
// Count of Digits Given String

#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[50] = {'\0'};
    int i = 0,D_Cnt = 0;

    printf("\n Enter a String :");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        if(cSrc[i] >= '0' && cSrc[i] <= '9')
        {
            D_Cnt++;
        }
        i++;
    }

    printf("\n Count of Digits Given String  = %d",D_Cnt);

    getch();
    return 0;
}
