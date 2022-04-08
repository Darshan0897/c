#include<stdio.h>
#include<conio.h>
void main()
{
	int number1,number2,numbera;
	clrscr();
	printf("\n enter a number1:");
	scanf("%d",&number1);
	printf("\n enter a number2:");
	scanf("%d",&number2);
	numbera=(number1*number2);
	printf("\n number c:%d",numbera);
	if(numbera%3==0)
	{
		printf("\n this number1 is  divisable by 3");
	}
	else
	{
		printf("\n this number is not divisable by 3");
	}

	getch();
}