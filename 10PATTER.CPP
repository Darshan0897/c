#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,j,k=65;
	for(i=1;i<=5;i++)
	{
	   for(j=1;j<=i;j++)
	   {
	     printf("\t  %c",k++);
	   }
	     printf("\n");
	}
	getch();
}