//////////////////////////////////////////////////////////
//
//
//         Max from 3 Numbers
//
//
//////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
int main()
{
    int n1,n2,n3;
    printf("\n Please,Enter three numbers to display the maximum numbers from them:");
    scanf("%d,%d,%d",&n1,&n2,&n3);
    if(n1>n2)
       {
           if(n1>n3)
           {
               printf("\n Max is n1 : %d",n1);
           }
           else
           {
               printf("\n Max is n3 : %d",n3);
           }

       }
       else
       {
           if(n2>n3)
           {
               printf("\n Max is n2 : %d",n2);
           }
           else
           {
               printf("\n Max is n3 : %d",n3);
           }
       }
       return 0;
}
