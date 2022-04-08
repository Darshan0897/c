#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i=1,j,k=65;
	x:
	if(i<=5)
	{
		j=1;
		y:
		if(j<=i)
		{
			printf("\t %c",k++);
			j++;
			goto y;
		}
		printf("\n");
		i++;
		goto x;
	}
	getch();
}