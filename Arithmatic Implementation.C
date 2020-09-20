#include<stdio.h>
#include<conio.h>
int main()
{
 int no1,no2,add,sub,mult,div;

   printf("\n Enter two numbers = ");
   scanf("%d%d",&no1,&no2);

   add=no1+no2;
   sub=no1-no2;
   mult=no1*no2;
   div=no1/no2;

   printf("\n addition of two numbers %d",add);
   scanf("%d",&add);
   printf("\n subtraction of two numbers %d ",sub);
   scanf("%d",&sub);
   printf("\n multiplication of two numbers %d ",mult);
   scanf("%d",&mult);
   printf("\n division of two numbers %d ",div);
   scanf("%d",&div);
  getch();



return 0;
}
