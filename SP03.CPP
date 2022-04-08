#include<stdio.h>
#include<conio.h>
int main()
{
	clrscr();
	int i,j,sp=40;
	for(i=0;i<5;i++)
	{
	   for(j=1;j<=sp;j++)
		printf(" ");
	   for(j=1;j<=i;j++)
	   {
		printf("* ");
	   }
		printf("\n");
		sp--;
	}

	for(i=5;i>0;i--)
	{
	   for(j=1;j<=sp;j++)
	   {
		   printf(" ");
	   }
	   for(j=1;j<=i;j++)
	   {
		   printf("* ");
	   }
	   printf("\n");
	   sp++;
	}
	getch();
 }
