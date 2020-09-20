#include<stdio.h>
void main()
{
    int i,a,c=0;
    printf("\n Enter a number= ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
     if(a%i==0)
        c++;
    }
    if(c==2)
        printf("Prime number");
    else
        printf("Not prime");
    {
        printf("\n\n Thank You");
    }
    getch();
    return 0;
}

