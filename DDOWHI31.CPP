#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i=5;
	do
	{
		int j=i;
		do
		{
			printf("\t %d",j++);
		}
		while(j<=5);
	i--;
	printf("\n");
	}while(i>=1);
	getch();
}
