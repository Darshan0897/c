#include<stdio.h>
#include<conio.h>
void main()
{       int a,b;
	clrscr();
	printf("\nEnter a value = ",a);
	scanf("\n%d",&a);
	printf("\n Enter b value = ",b);
	scanf("\n%d",&b);
	if(a<b)
	{
		printf("\n\t a is smallest value.");
	}
	else
	{
		printf("\n\t b is smallest value.");
	}
	getch();
}