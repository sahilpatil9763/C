#include<stdio.h>
#include<conio.h>

int main()
{
      int No = 0,Temp = 0,Dig = 0,OCnt = 0, ECnt = 0,ZCnt = 0;

      printf("\n Enter a Number = ");
      scanf("%d",&No);

      for(Temp = No;Temp !=0;Temp = Temp / 10)
      {
          Dig = Temp % 10;
          if(Dig == 0)
          {
              ZCnt++;
          }
          else if(Dig % 2 == 0)
          {
              ECnt++;
          }
          else
          {
              OCnt++;
          }
      }
      printf("\n\n EVEN Digits Count in of Given No %d %d.",No,ECnt);
      printf("\n\n ODD Digits Count in of Given No %d %d.",No,OCnt);
      printf("\n\n Zero's Count in of Given No %d %d.",No,ZCnt);

      getch();
      return 0;
}
