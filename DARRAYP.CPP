#include<stdio.h>
#include<conio.h>
void  main()
{
	clrscr();
	int a[10],b[10],i;
	for(i=0;i<5;i++)
	{
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
		printf("b[%d]:",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n a[%d]=%d \t\t  b[%d]=%d\n  ",i,a[i],i,b[i]);
	}

	getch();
}