#include<stdio.h>
#include<conio.h>
 void main()
{
	   clrscr();
	   int a[10],b[10],i,total;
	   for(i=0;i<5;i++)
	   {
		printf("enter the a[%d]:",i);
		scanf("%d",&a[i]);
	   }
	   for(i=0;i<5;i++)
	   {
		printf("enter the b[%d]:",i);
		scanf("%d",&b[i]);
	   }
		printf("\n a  \t b \ttotal");

	   for(i=0;i<5;i++)
	   {
		total=a[i]+b[i];
		printf("\n%d \t %d \t%d",a[i],b[i],total);
	   }
	 getch();
}

