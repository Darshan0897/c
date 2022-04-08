#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i=1;
	while(i<=5)
	{
	       int j=1;
	       while(j<=i)
	       {
		     printf("\t %d",j++);
	       }

	i++;
	printf("\n");
	}
	getch();
}
