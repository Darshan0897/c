#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	clrscr();
	printf("enter value A :");
	scanf("%d",&a);
	printf("enter value B :");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("a : %d\n b :%d",a,b);
	getch();
	return 0;
}