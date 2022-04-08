#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i=5;
	while(i>=1)
	{
		  int j=5;
		  while(j>=i)
		  {
		       printf("\t %d",j++);
		  }

	i++;
	printf("\n");
	}
	getch();
}

