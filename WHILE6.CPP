#include<stdio.h>
#include<conio.h>
void main()
{
	int i=65;
	clrscr();
	while(i<=69)
	{
		int j=65;
		while(j<=i)
		{
			printf("%c ",j);
			j++;
		}
		i++;
		printf("\n");
	}
	getch();
}