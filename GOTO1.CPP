#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i=1,j,k=1;
	i:
	if(i<=5)
	{
		int j=1;
		j:
		if(j<=i)
		{
			printf(" \t  %d",k++);
			j++;
			goto j;
		}
		printf("\n");
		i++;
		goto i;
	}
	getch();
}

