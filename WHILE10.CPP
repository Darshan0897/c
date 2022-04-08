#include<stdio.h>
#include<conio.h>
void main()
{
	int i=5;
	clrscr();
	while(i>=1)
	{
		int j=i;
		while(j<=5)
		{
			printf("%d ",j);
			j++;
		}
		i--;
		printf("\n");
	}
	getch();
}