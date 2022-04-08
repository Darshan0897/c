#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	char ch;
	ch=65;
	do
	{
	  if(ch>=65 && ch<=90)
	  {
		 printf("\t %c",ch);
		 ch=ch+34;
	  }
	  if(ch>=99 && ch<=1220
	  {
		 printf("\t %c",ch);
		 ch=ch-32;
	  }

	} while(ch<122);
	getch();
}
