#include<stdio.h>
#include<conio.h>

int main()
{
    int length, breadth;
    int area = 0;

    printf("Enter Length & Breadth = ");
    scanf("%d %d",&length, &breadth);

    area = length * breadth;

    printf("\n The Area of Rectangle is %d", area);

    getch();
    return 0;
}
