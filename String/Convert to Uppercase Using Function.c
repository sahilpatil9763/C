#include<stdio.h>
#include<string.h>
#include<conio.h>

void StrCpyX(char*,char*);

int main()
{
    char Str[20] = {};
    printf("\n Enter String : ");
    gets(Str);

    strupr(Str);
    printf("\n Output String = %s",Str);

    getch();
    return 0;
}

void StrUpX(char*Src)
{
    int i=0;

    while(Src[i] != '\0')
    {
        if(Src[i] >= 'a' && Src[i] <= 'z')
        {
            Src[i] -= 32;
        }
        i++;
    }
    return;
}
