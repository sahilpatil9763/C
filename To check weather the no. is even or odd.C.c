#include<stdio.h>
#include<conio.h>
int main()
{
    int num=0;
    printf("\n Enter any number=");
    scanf("%d",&num);
    if(num==0)
    {
        printf("\n Given no. is neither Even or Odd");
        goto Dwn;
    }
    if(num%2==0)
    {
        printf("\n Even");
    }
    else
    {
        printf("\n Odd");
    }
    Dwn:
    printf("\n\n Thank you");
    getch();
    return 0;
}
