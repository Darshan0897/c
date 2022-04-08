#include<stdio.h>
#include<conio.h>
   void main()
{
   clrscr();
   char ch=63;
   do
   {
	printf("\t %c",ch+=2);
   }while(ch<=90);
   getch();
}

