#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    Up:
        printf("\n Please,Enter Integer Number =>");
        scanf("%d",&No);

        if(No == 0)
        {
            printf("\n %d is Zero which is Neutral Number",No);
            goto Up;
        }

        if(No > 0)
        {
            printf("\n %d is Positive",No);
        }
        else
        {
            printf("\n % is Negative",No);
        }

        printf("\n\n Thanks!!!");
        getch();
        return 0;
}
