#include<stdio.h>
#include<conio.h>
   void main()
{
   clrscr();
   int i=0,m=0;
   do
   {
	  int j=0;
	  while(j<=3)
	  {
		  printf("\t %d",m);
		  j++;
	  }

   i++;
   m+=2;
   printf("\n");
   }while(i<=3);
   getch();
}

