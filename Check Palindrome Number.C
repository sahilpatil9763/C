#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0,Rev = 0,Temp = 0,Dig = 0;

    printf("\n Enter a number to check is it Palindrome = ");
    scanf("%d",&No);

    Temp = No;

    while(Temp != 0)
    {
        Dig = Temp % 10;
        Rev = (Rev * 10) + Dig;
        Temp = Temp / 10;
    }
    if(No == Rev)
    {
        printf("\n\n Reverse of Given No %d = %d.",No,Rev);
        printf("\n Hence, Given Number is Palindrome.\n");
    }
    else
    {
        printf("\n\n Reverse of  Given No %d is %d & As They are Not Equal.",No,Rev);
        printf("\n Hence, Given Number Is Not Palindrome.\n");
    }

    getch();
    return 0;
}
