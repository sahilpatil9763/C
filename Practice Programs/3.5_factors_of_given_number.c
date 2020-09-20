#include<stdio.h>
#include<conio.h>
int main()
{ int ino1,ino2,i,g=1,f=1;
  
   printf("\n enter first number=");
   scanf("%d",&ino1);
   printf("\n enter second number=");
   scanf("%d",&ino2);
   
   printf("\n\n $$$ first number factors $$$");
   for( i=1;i<=ino1;i++)
    {
     if(ino1%i==0)
    printf("\n first number factor is %d:%d",g++,i);
    }
    printf("\n\n $$$ second number factors $$$" );
   for(i=1;i<=ino2;i++)
    {  
    if(ino2%i==0)
    printf("\n second number factor is %d:%d",f++,i);
    }
    return 0;
  }