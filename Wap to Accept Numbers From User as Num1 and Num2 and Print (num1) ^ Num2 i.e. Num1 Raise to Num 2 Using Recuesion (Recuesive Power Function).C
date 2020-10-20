#include<stdio.h>

int power(int Num1, int Num2);

int main()
{
    int base, exp;

    printf("Enter a number: ");
    scanf("%d", &base);

    printf("\n\nEnter Power factor: ");
    scanf("%d", &exp);

    printf("\n\t%d^%d = %d", base, exp, power(base, exp));

    return 0;
}

int power(int b, int e)

{
    if(e == 0)

        return 1;

    return (b*power(b, e-1));
}
