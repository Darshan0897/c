#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a , b , avg;

	printf("enter a & b :");
	scanf("%d%d",&a,&b);

	printf("\na+b : %d",a+b);

	avg = (a+b)/2;

	printf("\naverage of two numbers : %d",avg);
	getch ();
}

