#include<stdio.h>
#include<conio.h>

int main()
{
    int r = 0,c = 0, i = 0, j = 0;

    printf("\n Enter Row & Column Count = ");
    scanf("%d%d",&r,&c);

    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    getch();
    return 0;
}
