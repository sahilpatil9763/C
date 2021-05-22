#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Res = 0;

    printf("\n Enter a Number : ");
    scanf("%d",&No);

    Res = No >> 7;

    printf("\n Output of Bitwise RIGHT Shift Operator : \n\n %d >> 2 : %d",No,Res);

    getch();
    return 0;
}
