#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("Enter a one value = ");
	scanf("%d",&a);
	if(a>100)
	{
		printf("Above the 100");
	}
	else
	{
		printf("below the 100");
	}
	getch();

}