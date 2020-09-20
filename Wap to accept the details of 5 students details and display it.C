#include<stdio.h>
#include<conio.h>

struct student
{
    char name [50];
    int roll;
    float marks;
}s;

int main()

{
    printf("\n Enter Information of students : ");

    printf("\n\n\n Enter name of student Name : ");
    scanf("%d",s.name);

    printf("\n Enter Roll No. : ");
    scanf("%d",s.roll);

    printf("\n Enter marks : ");
    scanf("%f",s.marks);

    printf("\n\n\n Displaying information of students : ");

    printf("\n Name :");
    printf("%s",s.name);
    printf("\n Roll No. : %d",s.roll);
    printf("\n Marks : %1f",s.marks);

    getch();
    return 0;
}
