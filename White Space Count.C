#include<stdio.h>
#include<conio.h>

int main()
{
    char cScr[20] = {'\0'};
    int Space_Cnt = 0,i = 0;

    printf("\n  Enter a String: ");
    gets(cSrc);

    while(cSrc[i] != '0')
    {
            if(cSrc[i] == '')
            {
                 Space_Cnt++;
            }
            i++;
    }

    printf("\n Count Of Vowels in Give String is =%d",Space_Cnt);

    getch();
    return 0;
}
