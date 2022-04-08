#include<stdio.h>
#include<conio.h>
int main()
{       float a,b,c, total;
	float per;
	clrscr();
	printf("Enter maths mark = ",a);
	scanf("%f",&a);
	printf("Enter physics mark =",b);
	scanf("%f",&b);
	printf("Enter chemistry mark =",c);
	scanf("%f",&c);
	total=a+b+c;
	printf("Total= %.2f",total);
	per= total/3;
	printf("\nper= %.2f",per);
	getch();
}