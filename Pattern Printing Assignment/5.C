#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j;
    char Ch = 'A';

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<=i)
            {
                printf(" %c",Ch);
                Ch = Ch+3;
                if(Ch>'Y')
                {
                    Ch = 'B';
                }
            }
        }
        printf("\n");
    }

    getch();
    return 0;
}
