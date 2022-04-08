#include<stdio.h>
#include<conio.h>
void main()
{
	 clrscr();
	 int m,p,c,total,avg;

		 printf("\n enter the value m:");
		 scanf("%d",&m);

		 printf("\n enter the value p:");
		 scanf("%d",&p);

		 printf("\n enter the value c:");
		 scanf("%d",&c);

		 total=m+p+c;

		 printf("\n sum of total  %d",total);

		 avg=(m+p+c)/3;

		 printf("\n avg of total %d",avg);

		 getch();

}

