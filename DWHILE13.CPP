#include<stdio.h>
#include<conio.h>
   void main()
{
   clrscr();
   int i,a=0,b=1,c;
   i=1;
   do
   {
	  printf("\t %d",a);
	  i++;
	  c=a+b;
	  a=b;
	  b=c;
   }while(i<=10);

   getch();
}

