#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1 , k=1;
	clrscr();
	while(i<=5)
	{
		int j=1;
		while(j<=i)
		{
			printf("%d ",(k++)%2);
			j++;
		}
		i++;
		printf("\n");
	}
	getch();
}