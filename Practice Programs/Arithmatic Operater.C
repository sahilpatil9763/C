#include<stdio.h>
#include<conio.h>
int main()
{

   int no1,no2,add,sub,mult,div,mod;
   printf("\n enter first number:");
   scanf("%d",&no1);
   printf("\n enter second number:");
   scanf("%d",&no2);

   add=no1+no2;
   sub=no1-no2;
   mult=no1*no2;
   div=no1/no2;
   mod=no1%no2;

   printf("\n$===========$$$$$$$$$============$");
   printf("\n\n$ additon of %d+%d=%15d $",no1,no2,add);
   printf("\n\n$ substaction of %d-%d=%11d $",no1,no2,sub);
   printf("\n\n$ multiplication of %d*%d=%8d $",no1,no2,mult);
   printf("\n\n$ division of %d/%d=%14d $",no1,no2,div);
   printf("\n\n$ mod of %d&%d=%19d $",no1,no2,mod);
   printf("\n\n$===========$$$$$$$$$============$");

   getch();

    printf("\n\n\t\tThanks");
    return 0;
}
