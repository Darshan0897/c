#include<stdio.h>
#include<conio.h>
void  main()
{
	clrscr();
	int a=[10],i,total=0;
	for(i=0;i<10;i++)
	{
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=1;i<10;i++)
	{

		printf("\n%d",a[i]);
		total+=a[i];
		i++;
	}

		printf("\n%d",total);

	getch();
}