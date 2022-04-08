#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i=1,j=2;
	do
	{

		printf(" ,%d,%d",i,j*j);
		i+=2;
		j+=2;
	}while(i<=30);

	getch();
}
