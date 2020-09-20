#include<stdio.h>
#include<conio.h>

int main()

{
   int ino1,ino2,ino3,max;

   printf("\n Enter First numbers : ");
   scanf("%d",&ino1);

   printf("\n Enter Second number : ");
   scanf("%d",&ino2);

   printf("\n Enter Third numbers : ");
   scanf("%d",&ino3);
   max=ino1>ino2?(ino1>ino3?ino1:ino3):(ino2>ino3?ino2:ino3);

   printf("\n Maximum number of %d and %d and %d is %d",ino1,ino2,ino3,max);

   return 0;
}

/*   if(ino1>ino2)
     {
       if(ino1>ino3)
         {
           printf("\n %d is a maximum number:",ino1);
          }
      else
          {
          printf("\n%d is maximum number:",ino3);
          }
      }
    else if(ino2>ino3)
       printf("\n %d is maximum number:",ino2);
      else
         printf("\n %d is maximum number:",ino3);
        getch();
        return 0;
  }
  */


