#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a,b;

	printf("enter a :");
	scanf("%d",&a);

	printf("enter b :");
	scanf("%d",&b);

	printf("\n a+b : %d",a+b);
	if(a+b%3)
	{
		printf("\n\ta+b(%d) is devisible",a+b);
	}
	else
	{
		printf("\n\ta+b(%d) is not devisible",a+b);
	}
	getch();
}

