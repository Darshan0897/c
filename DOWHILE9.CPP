#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1 , k=65;
	clrscr();
	do
	{
		int j=1;
		do
		{
			printf("%c ",k);
			j++;
			k++;
		}while(j<=i);
	i++;
	printf("\n");
	}while(i<=5);
	getch();
}