#include<conio.h>
#include<stdio.h>

int strLenX(char*Src)
{
    int Cnt = 0;

    while(Src[Cnt] != '\0')
    {
        Cnt++;
    }
    return Cnt;
}


int main()
{
    int Len = 0;
    char str[20] = {};

    printf("\n Enter a String : ");
    gets(str);

    Len = strLenX(str);
    printf("\n Length of given String = %d",Len);

    getch();
    return 0;
}

