#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	for(i=1;i<=50;i++)
	{
		printf("%d\t",i++);
		printf("%d\t",i*i);
	}
	getch();
}