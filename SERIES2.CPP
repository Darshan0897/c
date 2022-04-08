#include<stdio.h>
#include<conio.h>
   int main()
{
   clrscr();
   int i;
   for(i=65;i<=122;i+=2)
   {
	if(i>=65 && i<=90)
	{
	 printf("\t %c",i);
	i=i+34;
	}
	if(i>=99 && i<=122)
	{
	 printf("\t %c",i);
	 i=i-32;
	 }
   }

   getch();
}

