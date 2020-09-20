#include<stdio.h>
#include<conio.h>
int main()
{ int num=0,sum=0,count=0;
while(count<10)
 {
   printf("\n enter a number %d ",++count);
    scanf("%d",&num);
      sum=sum+num;
  }  
  printf("\n sum of the num %d",sum);
  
  printf("\nthanks");
getch();
return 0;
}
    