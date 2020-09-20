#include<stdio.h>
#include<conio.h>

int main()
{
            int i = 1, No = 0;

            printf("\n Enter a Number ==>");
            scanf("%d",&No);

            while(i <= 10)
            {
                printf("\n %-2d * %2d = %3d", No, i, No * i);
                i++;
            }

            getch();
            return 0;
}
