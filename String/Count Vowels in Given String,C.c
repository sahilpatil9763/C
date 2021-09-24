// Count Vowels in Given String

#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20]={'\0'};
    int v_Cnt = 0,i = 0;

    printf("\n Enter a String : ");
    gets(cSrc);

    while(cSrc[i]!='\0')
    {
        if(cSrc[i] == 'a'|| cSrc[i] == 'e' || cSrc[i] == 'i' || cSrc[i] == 'o' || cSrc[i] == 'u' || cSrc[i] == 'A' || cSrc[i] == 'E' || cSrc[i] == 'O' || cSrc[i] == 'U')
        {
            v_Cnt++;
        }
        i++;
    }

    printf("\n Count Og Vowels in Given String is = %d",v_Cnt);

    getch();
    return 0;

}
