///////////////////////////////////
/////count of the even numbers/////
////////and odd numbers///////////
//////////////////////////////////
#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,ino=0,cnt=0,g=0,k=0;
    printf("\n enter the count of number:");
    scanf("%d",&cnt);
    for(i=0; i<cnt; i++)
    {
        printf("\n\nenter %d number:",i+1);
        scanf("%d",&ino);

        if(ino%2==0)
        {
            printf("%d is even number",ino);

            g=g+1;
        }
        else
        {
            printf("%d is odd number",ino);

            k=k+1;
        }
    }
    printf("\n total even numbers is:\v%d",g);
    printf("\n total  odd numbers is:\v%d",k);
    printf("\n\nThanks...");
    getch();
    return 0;
}