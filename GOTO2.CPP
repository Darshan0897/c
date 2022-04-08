#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i=1,j,k=65;
	i:
	if(i<=5)
	{
		j=1;
		j:
		if(j<=i)
		{
			if(j%2==1)
			{
				printf("\t %c",k+32);
			}
			else
			{
				printf("\t %c",k);
			}
			k++;
			j++;
			goto j;
		}
		printf("\n");
		i++;
		goto i;
	}
	getch();
}
