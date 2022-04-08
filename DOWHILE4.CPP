#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1 , k=1;
	clrscr();
	do
	{
		int j=1;
		do
		{
			printf("%d ",k++);
			j++;
		}while(j<=i);
	i++;
	printf("\n");
	}while(i<=5);
	getch();
}