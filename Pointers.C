#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

float cal_total(int *total,int *ptr)
{
    int x;
    for(x=0;x<3;x++)
    {
       *total = *total + ptr[x];
    }

    float y;
    y = *total / 3 ;
    return y;
}

int main()
{
    int i=0;
    int Total=0;

    float per=0;

    int *SubMarks=NULL;
     SubMarks=(int*) malloc(sizeof(int)*3);

    for(i=0;i<3;i++)
    {
        printf("\n Enter %d subject Mark : ",i+1);
        scanf("%d",&SubMarks[i]);
    }

    per = cal_total(&Total,SubMarks);

    printf("\n Total Mark : %d",Total);
    printf("\n Percentage : %0.2f",per);

    getch();
    return 0;
}
