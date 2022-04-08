#include<stdio.h>
#include<conio.h>
   int main()
{
      clrscr();
      int i,j=1;
      for(i=1;i<=10;i++)
      {
	 printf("\t %d",i*j);
	 j+=j;
      }
	getch();
}

