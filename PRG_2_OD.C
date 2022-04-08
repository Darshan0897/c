#include<stdio.h>
#include<conio.h>
void main()
{       int a,b;
	clrscr();
	printf("Enter value =");
	scanf("\n%d",&a);
	if(a%2==0)
	{
		printf("\n value is even",a);
	}
	else
	{
		printf("\n value is odd",a);
	}


	getch();
}