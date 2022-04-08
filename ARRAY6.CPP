#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[10],i,sum=0;
	for(i=0;i<10;i++)
	{
		printf(" enter a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		printf("\n %d",a[i]);
		sum+=a[i];
	}
	printf("\n %d",sum);
	getch();
}

