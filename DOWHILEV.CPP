#include<stdio.h>
#include<conio.h>
void main()
{
	int i=65;
	clrscr();
	do
	{
		int j=i;
		do
		{
			printf("%c ",j);
			j--;
		}while(j>=65);
	i++;
	printf("\n");
	}while(i<=69);
	getch();
}

