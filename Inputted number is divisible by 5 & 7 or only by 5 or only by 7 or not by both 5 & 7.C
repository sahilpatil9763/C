#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n Please,,Enter integer Number =>");
    scanf("%d",No);

    if(No == 0)
    {
        printf("\n Invalid Input..");
        goto Dwn;
    }

    if((No %5 == 0)&&(No %7 == 0))
    {
        printf("\n DIVISIBLE by Both 5 & 7");
    }
    else if(No %5 == 0)
    {
        printf("\n DIVISIBLE by only 5 Not by 7");
    }
    else if(No %7 == 0)
        {
            printf("\n DIVISIBLE by 7 Not by 5");
        }
        else
        {
            printf("\n Neither DIVISIBLE by 5 Nor by 7");
        }
        Dwn:

        printf("\n\n Thanks!!!");
        getch();
        return 0;
}

