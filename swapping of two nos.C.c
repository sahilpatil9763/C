#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,temp;
    printf("\n Enter two numbers=");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("\n a=%d b=%d",a,b);
    getch();
    return 0;
}
