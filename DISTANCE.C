#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	float km , m , cm , ft , inch;
	printf("enter the distance in km :");
	scanf("%f",&km);
	m = km*1000;
	cm = m*100;
	inch = cm/2.54;
	ft = inch/12;
	printf("\ndistance in meter = %f",m);
	printf("\ndistance in cm = %f",cm);
	printf("\ndistance in inch = %f",inch);
	printf("\ndistance in ft = %f",ft);
	getch();
}