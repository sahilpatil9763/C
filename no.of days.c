#include<stdio.h>
#include<conio.h>

int main()
{
    int Day;

    printf("\n Enter a Day number(1-7) :");
    scanf("%d",&Day);

    if (Day==1)
    {
      printf("\n\n Today is MONDAY.");
    }
    else if (Day==2)
    {
        printf("\n\n Today is TUESDAY.");
    }
    else if (Day==3)
    {
        printf("\n\n Today is WEDNESDAY.");
    }
    else if (Day==4)
    {
        printf("\n\n Today is THURSDAY.");
    }
    else if (Day==5)
    {
        printf("\n\n Today is FRIDAY.");
    }
    else if (Day==6)
    {
        printf("\n\n Today is SATURDAY.");
    }
    else if (Day==7)
    {
        printf("\n\n Today is SUNDAY    .");
    }
    else
    {
        printf("\n\n The input is INVALID");
    }
    return 0;
}
