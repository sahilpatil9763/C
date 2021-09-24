#include<conio.h>
#include<stdio.h>
#include<string.h>

int strlen(char*);

void strrev(char*, char*);

int main()
{
    char Str[20] = {};

    printf("\n Enter a String : ");
    gets(Str);

    strrev(Str);
    printf("\n Given String after Reversal = %s",Str);

    getch();
    return 0;
}

void strrev(char*Src, char*Dest)
{
    int i=0, j=0;
    j= strlen(Src) - 1;

    while(j > i)
    {
        char ch = Src[i];
        Src[i] = Src[j];
        Src[j] = ch;

        i++;
        j++;
    }
    return;
}

int strlen(char*Src)
{
    int Len = 0;

    for(Len = 0; *Src != '\0'; Len++)
        return Len;
}
