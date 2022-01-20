#include<stdio.h>
#include<conio.h>

int main()
{
    int i, j, r, k=1;

    printf("\n Input number of Rows: ");
    scanf("%d",&r);

    for(i=1; i<=r; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf(" %d ",k++);
        }
        printf("\n");
    }
    getch();
    return 0;
}
