#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1 , k=65 ;
	clrscr();
	while(i<=5)
	{
		int j=1;
		while(j<=i)
		{
			if(j%2==1)
			{
				printf("%c ",k+32);
			}
			else
			{
				printf("%c ",k);
			}
			k++;
			j++;
		}
		i++;
		printf("\n");
	}
	getch();
}