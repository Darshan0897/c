#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i=0;
	while(i<=3)
	{
	       int j=0;
	       while(j<=3)
	       {
		    printf("\t %d",j++);
	       }

	       i++;
	       printf("\n");
	}
	getch();
}