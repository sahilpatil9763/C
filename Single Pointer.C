#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

float Calculate_Tot_Per(int *T,int **M)
{
    int i = 0;
    float per = 0.0f;

    for(i = 0 ; i < 3 ; i++)
    {
        *T = *T + (*M)[i];
    }

    per = (*T / 3);
    return per;

}

int main()
{
    int i = 0 , Total = 0;
    float Per = 0.0f;

    int *Marks = 0;

    Marks = (int*)malloc(sizeof(int) * 3);

    for(i = 0 ; i < 3 ; i++)
    {
        printf("\nEnter %d subjects marks = ",i+1);
        scanf("%d",&Marks[i]);
    }

    Per = Calculate_Tot_Per(&Total,&Marks);

    printf("\n Total marks : %d.",Total);
    printf("\n Percentage : %0.2f.",Per);

    getch();
    return 0;
}
