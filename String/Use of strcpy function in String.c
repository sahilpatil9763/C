#include<stdio.h>
#include<conio.h>

void StrCpyX(char*,char*);

int main()
{
    char Str1[20] = {};
    char Str2[20] = {};

    printf("\n Enter a String : ");
    gets(Str1);

    StrCpyX(Str1, Str2);

    printf("\n Input String : %s", Str1);
    printf("\n Output String : %s", Str2);

    getch();
    return 0;
}

void StrCpyX(char*Src, char*Dest)
{
    int i=0;

    while(Src[i] != '\0')
    {
        Dest[i] = Src[i];
        i++;
    }
    return;
}
