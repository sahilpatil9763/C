#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int ino,icnt,temp=0;
    printf("\n ente the count of number:");
    scanf("%d",&icnt);
    for(int i=0; i<icnt; i++)
    {
        printf("\n enter the number %d:",i+1);
        scanf("%d",&ino);
        if(ino>temp)
         {
          temp=ino;
         }
    }
    printf("\n maximum number of given numbers:%d",temp);
     
    getch();
    return 0;
}