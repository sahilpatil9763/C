#include<stdio.h>
#include<conio.h>
int main()
{
    int num,sum=0,r;
    printf("\n enter a number:");
    scanf("%d",&num);
  while(num)
  {
    r=num%10;
    num=num/10;
    sum=sum+r;
  }
  printf("\n %d sum of given digits",sum);

  getch();
  return 0;
}
