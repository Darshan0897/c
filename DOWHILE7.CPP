#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1 , k=65;
	clrscr();
	do
	{
		int j=1;
		do
		{
		if(i%2==0)
			{
				printf("%c ",k+32);
			}
			else
			{
				printf("%c ",k);
			}
			j++;
			k++;
		}while(j<=i);
	i++;
	printf("\n");
	}while(i<=5);
	getch();

}