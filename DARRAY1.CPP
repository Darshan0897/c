#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,j, a[5],b[5];
	for(i=0;i<5;i++)
	{
		printf("enter a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n a[%d]:%d",i,a[i]);
	}
	for(j=0;j<5;j++)
	{
		printf("\n enter b[%d]",j);
		scanf("%d",&b[j]);
	}
	for(j=0;j<5;j++)
	{
		printf("\n b[%d};%d",j,b[j]);
	}



	getch();
}

