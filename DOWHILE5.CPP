#include<stdio.h>
#include<conio.h>
void main()
{
	int i=5;
	clrscr();
	do
	{
		int j=5;
		do
		{
			printf("%d ",j);
			j--;
		}while(j>=i);
	i--;
	printf("\n");
	}while(i>=1);
	getch();
}