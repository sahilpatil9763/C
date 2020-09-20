#include<stdio.h>
#include<conio.h>
main()
{
    int n,rem;
    printf("\n Enter a number : ");
    scanf("%d",&n);
    printf("\n Reverse number is : ");

    while(n>0)

    {
        rem=n%10;
        printf("%d",rem);
        n=n/10;
    }
        getch ();
        return 0;
}
