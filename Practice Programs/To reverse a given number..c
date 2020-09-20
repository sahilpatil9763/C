#include<stdio.h>
#include<conio.h>

void main()
{
    int n,a,r=0;
    clrscr();
    printf("Enter any no. to get its reverse.");
    scanf("%d",&n);
    while(n>=1)
    {
        a=n%10;
        r=r*10+a;
        n=n/10;
    }

    printf("reverse=%d",r);
    getch();
    return 0;
}
