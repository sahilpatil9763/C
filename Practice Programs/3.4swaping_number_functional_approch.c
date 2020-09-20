#include<stdio.h> 
#include<conio.h>
void swap(int,int,int); 
int main() 
{ 
int ino1=0,ino2=0,r;
 printf("\n enter any two number:");
 scanf("%d%d",&ino1,&ino2);
  swap(ino1,ino2,r);
 getch();
 return 0; 
} 
 void swap(int ino1,int ino2,int r)
{
 
  r=ino1;
  ino1=ino2;
  ino2=r;
 printf("\n after swapin numbers %d,%d",ino1,ino2); 
 getch();
 
 } 