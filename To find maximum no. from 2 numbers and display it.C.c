#include<stdio.h>
#include<conio.h>
int main()
{
    int n1=0,n2=0;

    printf("\n Please.Enter 2 numbers to get maximum from them:");
    scanf("%d%d",&n1,&n2);

    if(n1>n2)
    {
        printf("\n %d is Maximum",n1);
    }
    else
    {
        printf("\n %d is Maximum",n2);
    }
    getch();

   return 0;
}
