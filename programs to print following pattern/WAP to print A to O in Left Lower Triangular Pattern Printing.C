#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j;
    char c = 'A';

    for(i=0;i<=n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",c);
        }
        c++;
        printf("\n");
    }
    getch();
    return 0;
}
