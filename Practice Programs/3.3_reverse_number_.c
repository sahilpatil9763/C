#include<stdio.h>
#include<conio.h>
int main()
{ int ino,rev,rem;
  
   printf("\n enter number:");
   scanf("%d",&ino);
  while(ino>0)
{
rem=ino%10,
ino=ino/10,
rev=rev*10+rem;
}
printf("\n revers number=%d",rev);
    return 0;
  }