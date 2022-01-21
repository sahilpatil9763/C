#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, j = 0, r = 0;

    printf("\n Input number of Rows: ");
    scanf("%d",&r);


    for(i = 1; i <= r; i++)
    {
        for(j = 1; j <= r; j++)
        {
            if(i >= j)
            {
                printf(" Q ");
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}
