#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Size 7                  // Capacity of Stack

void Push(int Ele);
void Pop();
int Is_Stack_Full();
int Is_Stack_Empty();
void Display_Stack();

// Declare -  Create Stack
int Stack[Size] = {0};
int Top = 0;

int main()
{
    printf("\n =================***** FORK Stack *****================= \n");

    Pop();

    Push(10);
    Push(21);
    Push(55);

    Pop();

    getch();
    system("cls");

    Display_Stack();

    getch();
    system("cls");

    Push(45);
    Push(84);
    Push(22);
    Push(65);
    Push(61);
    Push(11);

    Display_Stack();

    getch();
    return 0;
}

void Push(int Ele)
{
    int Ret = Is_Stack_Full();

    if(1 == Ret)
    {
        printf("\n Stack is Already Full Can't PUSH new Element!!!");
    }
    else
    {
        Stack[Top] = Ele;
        Top++;

        printf("\n Element %d Inserted in Stack Successfully.", Ele);
    }

    return;
}

int Is_Stack_Full()
{
    int Ret = 0;

    if(Top == Size)
    {
        Ret = 1;
    }

    return Ret;
}

void Pop()
{
    int Ret = Is_Stack_Empty();

    if(1 == Ret)
    {
        printf("\n Stack is Already Empty Can't Pop any Element!!!");
    }
    else
    {
        Top--;
        printf("\n Removed Element From Stack is = %d.", Stack[Top]);
    }

    return;
}

int Is_Stack_Empty()
{
    int Ret = 0;

    if(0 == Top)
    {
        Ret = 1;
    }

    return Ret;
}

void Display_Stack()
{
    int Ret = Is_Stack_Empty();

    if(1 == Ret)
    {
        printf("\n Stack is Already Empty, No Element To Display!!!");
    }
    else
    {
        printf("\n =================***** FORK Stack *****================= \n");
        printf("\n Elements in Stack Are => \n");

        for(int i = Top-1; i >= 0; i--)
        {
            printf("\n\t\t | %d |", Stack[i]);
        }
    }

    return;
}
