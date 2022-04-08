#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k=65;
	clrscr();
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c ",k);
			k++;
		}
		printf("\n");

	}
	getch();
}
