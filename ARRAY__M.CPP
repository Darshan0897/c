
#include<stdio.h>
#include<conio.h>
int main()
{
	
	int a[5][5],b[5][5],i,j,total=0;
	   for(i=0;i<3;i++)
	   {
		for(j=0;j<3;j++)
		{
			printf(" enter a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	   }
	   for(i=0;i<3;i++)
	   {
		for(j=0;j<3;j++)
		{
			printf(" enter b[%d][%d]:",i,j);
			scanf("%d",&b[i][j]);
		}

	   }
			printf("\n\t\t matrix1\t\t\matrix2\t\t  matrix3\n");

	   for(i=0;i<3;i++)
	   {
		for(j=0;j<3;j++)
		{
			printf("\t%d",a[i][j]);
		}
	       //	printf("\n");
		for(j=0;j<3;j++)
		{
			printf("\t%d",b[i][j]);
		}
		for(j=0;j<3;j++)
		{
			total=a[i][j]+b[i][j];
			printf("\t%d",total);
		}
		printf("\n");
	   }
	   getch();
}