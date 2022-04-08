#include<stdio.h>
#include<conio.h>
void main()
{
	int i=5;
	clrscr();
	while(i>=1)
	{
		int j=5 ;
		while(j>=i)
		{
			printf("%d ",j);
			j--;
		}
		i--;
		printf("\n");
	}
	getch();
}