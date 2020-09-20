#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Please,Enter a number to check weather it is Even or Odd=> ");
    scanf("%d",&n);

    if(n%2==0)
    {
        printf("\n Number is Even");
    }
    else
    {
        printf("\n Number is Odd");
    }
    return 0;
}
