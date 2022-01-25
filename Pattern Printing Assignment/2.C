#include<stdio.h>
#include<conio.h>

int main()
{
      int i,j;
      char ch='A';

         for(i=1;i<=5;i++)
         {
          for(j=1;j<=5;j++,ch++)
            {
                if(i>=j)
               {
                printf(" %c ",ch);
               }
            }
           printf("\n");
         }

      getch();
      return 0;
 }
