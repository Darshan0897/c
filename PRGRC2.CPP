#include<stdio.h>
#include<conio.h>
   void main()
{
   clrscr();
   int i,j=1;
   for(i=0;i<=3;i++)
   {
       for(j=0;j<=3;j++)
       {
	   printf("\t %d",j,i);
       }
       printf("\n");
   }
   getch();
}

