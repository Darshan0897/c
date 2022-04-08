#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a;
	clrscr();
	printf("ENTER A VALUE =");
	scanf("%d",&a);
	for(i=a;i>=1;i--)
	{
		printf("\n%d",i);
	}
	getch();
}