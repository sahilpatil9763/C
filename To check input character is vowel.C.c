#include<stdio.h>
#include<conio.h>

int main()
{
    printf("\n To check whether input character is a Vowel : ");

    char ch;
    printf("\n\n Input a character : ");
    scanf("%c",&ch);

    switch(ch)
    {

        case 'a' :
        case 'A' :
        case 'e' :
        case 'E' :
        case 'i' :
        case 'I' :
        case 'o' :
        case 'O' :
        case 'u' :
        case 'U' :

            printf("\n\n\t%c is a Vowel.\n\n",ch);
            break;
        default:
            printf("\n\n\t%c is not Vowel.\n\n",ch);
    }
    printf("\n\n\t !!! THANKS !!!\n\n");
    return 0;
}
