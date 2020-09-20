#include<stdio.h>
#include<conio.h>

int main()
{
     int No = 0, Sum = 0, Temp = 0, DCnt = 0;

     printf("\n Enter a Number to Find Digit Sum = ");
     scanf("%d",&No);


     if (DCnt == 3)
     {
         for(Temp = No; Temp != 0; Temp = Temp / 10)
         {
             Sum = Sum + (Temp %10);
         }

         printf("\n\n Sum of Digits in %d = %d.",No,Sum);
     }
     else
     {
         printf("\n Invalid Number");
     }

     printf("\n Thanks");

     getch();
     return 0;
}
