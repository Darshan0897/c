#include<stdio.h>
#include<conio.h>
void main()
{
   // area of rectangle
	clrscr();
	int length,breadth,area; // length=20,breadth=15
	printf("\n enter the value of length:");
	scanf("%d",&length);
	printf("\n enter the value of breadth:");
	scanf("%d",&breadth);
	area=2*length*breadth;
	printf("\n the area of rectangle is %d",area);
	getch();

}