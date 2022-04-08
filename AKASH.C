#include<stdio.h>
#include<conio.h>
void main()
{
	int number1,number2,numberc;
	clrscr();
	printf("\n enter a number1");
	scanf("%d",&number1);
	printf("\n enter a number2");
	scanf("%d",&number2);
	numberc=(number1*number2);

	if(numberc%3==0)
	{
		printf("\n this number is diviseble by 3");
	}
	else
	{
		printf("\n this number is not diviseble by 3 ");
	}
	getch();
}