#include<stdio.h>
#include<conio.h>
#include<string.h>

int Word_Count(char*);

int main()
{
    int Wcnt = 0;
    char Str[20] = {};

    printf("\n Enter a String : ");
    gets(Str);

    Wcnt = Word_Count(Str);
    printf("\n Word in Given String = %d",Wcnt);

    getch();
    return 0;
}

int Word_Count(char*Src)
{
    int i=0, Cnt=0;

    while(Src[i] != '\0')
    {
        if(Src[i] == ' ' || Src[i] == ',' || Src[i] == '.')
        {
            i++;
            continue;
        }
        Cnt++;

        while(Src[i] != ' ' && Src[i] != ',' && Src[i] != '\0')
        {
            i++;
        }
    }
    return Cnt;
}
