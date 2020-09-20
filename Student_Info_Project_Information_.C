#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

#define Max 5

int main()
{
      char Name[20] ="", TName[20] = "";
      int i = 0,RollNo = 0,TRollNo = 0,Physics = 0,TPhysics = 0,Chemistry =0,TChemistry = 0,Maths = 0,TMaths = 0, Biology = 0,TBiology = 0,English = 0,TEnglish = 0, Total = 0,TTotal = 0;
      float Per = 0.0,TPer = 0.0;

      printf("\n\n Enter %d Students Information To Find Topper Students Among Them :\n",Max);

      for(i = 0;i < Max; i++)
      {
          printf("\n Enter %d Student Details =>",i+1);
          RollNo = i+1;

          printf("\n\t Enter Student Name : ");
          scanf(" %[^\n]",&Name);
          fflush(stdin);

          printf("\n\t Enter Student Physics Marks :");
          scanf("%d",&Physics);

          printf("\n\t Enter Student Chemistry Marks :");
          scanf("%d",&Chemistry);

          printf("\n\t Enter Student Maths Marks :");
          scanf("%d",&Maths);

          printf("\n\t Enter Student Biology Marks :");
          scanf("%d",&Biology);

          printf("\n\t Enter Student English Marks :");
          scanf("%d",&English);

          Total = Physics + Chemistry + Maths + Biology + English;
          Per = (Total*100)/500;

          getch();

          if(i == 0 || TTotal < Total)
          {
               TRollNo = RollNo;
               strcpy(TName,Name);
               TPhysics = Physics;
               TChemistry = Chemistry;
               TMaths = Maths;
               TBiology = Biology;
               TEnglish = English;
               TTotal = Total;
               TPer = Per;
          }
      }
      getch();


      printf("\n$$$$$$======******TOPPER******======$$$$$$$");
      printf("\n$\t Student Roll No =>%d\t  $",TRollNo);
      printf("\n$\t Student Name=%s\t\t  $",TName);
      printf("\n$\t Student Total=>%d\t  $",TTotal);
      printf("\n$\t Student Percentage=>%2.2f%% $\n$\t\t\t\t   $",TPer);
      printf("\n$$$$$$======******************======$$$$$$$");
      getch();
      return 0;

}
