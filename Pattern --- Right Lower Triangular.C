#include<stdio.h>
#include<conio.h>

int main()
{
    int x = 0, i = 0, j = 0;

    printf("\n Enter a value for Right Lower Triangular Pattern = ");
    scanf("%d",&x);

    for(i = 1; i <= x; i++)
    {
        for(j = 1; j <= x; j++)
        {
            if((i + j)> x)
            {
                printf(" Q ");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}
