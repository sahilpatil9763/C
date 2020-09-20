#include<stdio.h>
#include<conio.h>
int main()
{
    int no1,no2,max;

    printf("\n Enter First number:");
    scanf("%d",&no1);
    printf("\n Enter Second number:");
    scanf("%d",&no2);

    if(no1>=no2)
   {
       printf("\n the maximum number%d",no1);
   }
   else if (no2>=no1)
   {
        printf("\n the maximum number%d",no2);
   }
   else
   {
         printf("\n both values are equal");
   }
max=(no1>no2)? no1:no2;
printf("\n maximum number of %d and %d is %d",no1,no2,max);
return 0;
}
