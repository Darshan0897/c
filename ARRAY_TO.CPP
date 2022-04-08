#include<stdio.h>
#include<conio.h>
void main()
{
	int n[10] , i ,total=0 ;
	clrscr();
	for(i=0;i<10;i++)
	{
		printf("enter n[%d] :",i);
		scanf("%d",&n[i]);
	}
	for(i=0;i<10;i++)
	{
		printf("\n %d",n[i]);
		total+=n[i];
	}
	printf("\n %d",total);
	getch();
}

