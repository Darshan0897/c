#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1;
	clrscr();
	while(i<=4)
	{
		int j=1;
		while(j<=4)
		{
			if(i%2==0)
			{
				printf("%c ",j+96);
			}
			else
			{
				printf("%c ",j+64);
			}

			j++;
		}
		i++;
		printf("\n");
	}
	getch();
}