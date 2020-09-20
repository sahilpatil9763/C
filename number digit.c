#include<stdio.h>
#include<conio.h>
int main()
{
    char ch='\0';

    printf("\n Enter a character to check its case=>");

    ch=getche();

    if((ch>=65)&&(ch<=90))
    {
        printf("\n Given character is UPPERCASE!!!");
    }
    else if((ch>=97)&&(ch<=127))
    {
        printf("\n Given character is LOWERCASE!!!");
    }
    else if((ch>=48)&&(ch<=57))
    {
        printf("\n Given character is DIGIT !!!");
    }
    else
    {
        printf("\n Given character is Special Symbol!!!");
    }
    getch();
    return 0;
}

