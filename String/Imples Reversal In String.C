#include<conio.h>
#include<stdio.h>

int strlenX(char*);
void strrevX(char*);

int main()
{
    char Str[40] = {};

    printf("\n Enter a String : ");
    gets(Str);

    strrevX(Str);
    printf("\n Given String after Reversal = %s",Str);

    getch();
    return 0;
}

void strrevX(char* Src)
{
    int i = 0, j = 0;

    j = strlenX(Src) - 1;

    while(j > i)
    {
        char ch = Src[i];
        Src[i] = Src[j];
        Src[j] = ch;

        i++;
        j--;
    }

    return;
}

int strlenX(char* Src)
{
    int Len = 0;

    for(Len = 0; *Src != '\0'; Len++, Src++);

    return Len;
}
