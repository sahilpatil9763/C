#include<stdio.h>
#include<conio.h>

int main()
{
       int No = 0, Rev = 0, Temp = 0, Dig = 0;

       printf("\n Enter a Number to Find its Reverse = ");
       scanf("%d",&No);

       Temp = No;

       while (Temp !=0)
       {
           Dig = Temp % 10;
           Rev = (Rev * 10) + Dig;

           printf("\n Digit = %d. \t Rev = %d \tTemp = %d",Dig,Rev,Temp);

           Temp = Temp / 10;
       }
       printf("\n\n Reverse of %d = %d.",No,Rev);

       getch();
       return 0;
}
