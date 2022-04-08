#include<stdio.h>
#include<conio.h>
void main()
{
	int n[5][2] ,i ,j ;
	clrscr();
	for(i=0;i<5;i++)
	{
		for(j=0;j<2;j++)
		printf("enter n[%d][%d] :",i,j);
		scanf("%d",&n[i][j]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n %d",n[i][j]);
	}
	getch();
}
