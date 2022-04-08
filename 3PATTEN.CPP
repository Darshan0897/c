#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i , j ;
	for(i=1;i<=5;i++)
	{
	  //	for(j=1;j<=sp;j++)
	  //		printf(" ");
		for(j=1;j<=5;j++)
		{
		   //	printf("*");
			if(i==1||i==5||j==1||j==5)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	  // 	sp--;
	}
	getch();
}

