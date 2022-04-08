#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[5][5],i,j,dia=0,ut=0,nt=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter the a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}

	       //	printf("\n \t\tmatrix1\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",a[i][j]);
		}

		printf("\n");

	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
				dia+=a[i][j];
			}
			else if(i<j)
			{
				ut+=a[i][j];
			}
			else
			{
				nt+=a[i][j];
			}

		}
	}
	printf("\ndiagonal:%d",dia);
	printf("\nupper triangle:%d",ut);
	printf("\nlower triangle:%d",nt);
	getch();
}






