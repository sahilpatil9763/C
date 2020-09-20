#include<stdio.H>
#include<conio.h>

int main()
{
    int x = 0, i = 0, j = 0;

    printf("\n Enter a value for Lower Triangular Pattern = ");
    scanf("%d",&x);

    for(i = 1; i <= x; i++)
    {
        for(j = 1; j <= x; j++)
        {
            if(i >= j)
            {
                printf(" * ");
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}
