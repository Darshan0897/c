#include<stdio.h>
#include<conio.h>
void main()
{
	int i=65;
	clrscr();
	do
	{
		int j=65;
		do
		{
			printf("%c ",j);
			j++;
		}while(j<=i);
	i++;
	printf("\n");
	}while(i<=69);
	getch();
}

