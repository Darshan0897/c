#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	i=65;
	do
	{
		 int j=65;
		 do
		 {
		       printf("\t %d",j++);

		 }
		  while(j<=i);

	i++;
	printf("\n");
	}while(i<=69);
	getch();
}

