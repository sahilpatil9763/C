#include<stdio.h>
#include<conio.h>
int main()

{
    char ch='p';
    printf("\n Enter a character to chcek weather it is upper case/lower case/special character/digit \n= ");
    ch=getche(); //scanf("%c",&ch);
    if (ch>='A' && ch<='Z')
    {
        printf("\n Upper case");
    }
    else if(ch>='a' && ch<='z')
    {
        printf("\n Lower case");
    }
    else if(ch>='0' && ch<='9')
    {
        printf("\n Digit");
    }
    else
    {
        printf("\n special character");
    }
    getch();
    return 0;
}
