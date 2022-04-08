#include<stdio.h>
#include<conio.h>
void main()
{
    // convert celcius to fahrenheit
	clrscr();
	int celcius,fahrenheit;
	printf("\n enter the value of celcius :");
	scanf("%d",&celcius);
	fahrenheit=(celcius*1.8)+32;
	printf("\n celcius convert to fahrenheit is %d",fahrenheit);
	getch();
}