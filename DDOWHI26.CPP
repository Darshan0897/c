#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i=1,k=1;
	do
	{
	       int j=1;
	       do
	       {
		   printf("\t %d",k++);
		   j++;
	       }while(j>=i);
	i++;
	printf("\n");
	}while(i<=5);

	getch();
}

