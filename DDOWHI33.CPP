#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i=65;
	do
	{
		int j=i;
		do
		{
			printf("\t %c",j--);
		}while(j>=65);
	i++;
	printf("\n");
	}while(i<=69);
	getch();
}

