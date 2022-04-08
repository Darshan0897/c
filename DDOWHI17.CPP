#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i=0,j;
	do
	{
		int j=0;
		do
		{
		   printf("\t %d",i,j++);
		}while(j<=3);

	 i++;
	 printf("\n");
	}while(i<=3);
	getch();
}