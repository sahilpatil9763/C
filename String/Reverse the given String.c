#include<stdio.h>
#include<conio.h>

void strRevX(char*,char*);

int main()
{
    char Str1[20] = {};
    char Str2[20] = {};

    printf("\n Enter a String : ");
    gets(Str1);

    strRevX(Str1, Str2);

    printf(" \n Output String : %s",Str2);

    getch();
    return 0;
}

void strRevX(char*Src, char*Dest)
{
    int i=0, Cnt= strlen(Src) - 1;

    while(Cnt >= 0)
    {
        Dest[i] = Src[Cnt];
        i++;
        Cnt--;
    }
    return;
}
