#include<stdio.h>
#include<conio.h>
void main()
{
	int i=65;
	clrscr();
	while(i<=69)
	{
		int j=i;
		while(j>=65)
		{
			printf("%c ",j);
			j--;
		}
		i++;
		printf("\n");
	}
	getch();
}