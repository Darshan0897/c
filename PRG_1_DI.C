#include<stdio.h>
#include<conio.h>
void main()
{       int a,b=3, c=5, d=7;
	clrscr();
	printf("Enter a value =",a);
	scanf("%d",&a);
	if(a%b==0 && a%c==0 && a%d==0)
	{
		printf("\nvalue is divised");
	}
	else
	{
		printf("\nvalue is not divised");
	}
	getch();
}

