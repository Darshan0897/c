#include<stdio.h>
#include<conio.h>
void main()
{
	int i=5;
	clrscr();
	do
	{
		int j=i;
		do
		{
			printf("%d ",j);
			j++;
		}while(j<=5);
	i--;
	printf("\n");
	}while(i>=1);
	getch();
}