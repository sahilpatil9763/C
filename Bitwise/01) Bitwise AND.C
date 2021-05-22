#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0 , No2 = 0 , Res = 0;

    printf("\n Enter Two Numbers : " );
    scanf("%d%d",&No1,&No2);

    Res = No1 & No2;

    printf("\n Bitwise AND Between %d & %d = %d.",No1,No2,Res);

    getch();
    return 0;
}
