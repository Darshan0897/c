#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i=1, k=65;
	do
	{
		int j=1;
		do
		{
			if(j%2==1)
			{
				printf("\t %c",k+32);
			}
			else
			{
				printf("\t %c",k);
			}
		j++;
		k++;
		}while(j<=i);

	i++;
	printf("\n");
	}while(i<=5);
	getch();
}

