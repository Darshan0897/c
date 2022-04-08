#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,j;
	i=1;
	while(i<=7)
	{
		int j=1;
		while(j<=7)
		{
			printf("\t %d",j,i);
			j+=2;
		}
		i+=2;
		printf("\n");
	}
	getch();
}
