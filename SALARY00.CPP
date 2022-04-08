#include<stdio.h>
#include<conio.h>
void main()
{
	int age;
	clrscr();
	printf("enter age :");
	scanf("%d",&age);

	if(age>=18)
	{
		printf("\n you can vote",age);
	}
	else
	{
		printf("\n you can't vote",age);
	}
	getch ();
}