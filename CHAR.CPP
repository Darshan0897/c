#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	char a;
	printf("enter character :");
	scanf("%c",&a);
	if(a>=65&&a<=90)
	{
	a=a+32;
	printf("%c",a);
	}
	else
	{
	a=a-32;
	printf("%c",a);
	}
	getch();
}

