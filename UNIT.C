#include<stdio.h>
#include<conio.h>
void main()
{
	int u , us , ut , amt , totalamt ;
	clrscr();
	printf("enter u & us & ut :");
	scanf("%d%d%d",&u,&us,&ut);
	if(u>=1000)
	{
		amt=u*0.90;
	}
	totalamt=u+us+ut;
	if(totalamt>4000)
	{
		amt=totalamt*1.12;
		printf("\namt :%d",amt);
	}

	getch();
}