#include<stdio.h>
#include<conio.h>

int main()
{
        int i = 0, No = 0, Max = 0, Min = 0;

        while(i < 10)
        {
            printf("\n Enter Number %d=> ",i+1);
            scanf("%d",&No);

            if(i == 0)
            {
                Min = No;
                goto nxt;
            }
            else if(No < Min)
            {
                Min = No;
            }

            nxt:
                i++;
        }

        printf("\n Minimum from given number is = %d",Min);
        printf("\n Maximum from given number is = %d",Max);

        getch();
        return 0;
}
