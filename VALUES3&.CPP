#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a,b;
	printf("enter a & b :");
	scanf("%d%d",&a,&b);

	printf("\n a+b : %d",a+b);

	if(a+b%3==0 && a+b%5==0)
	{
		printf("\n a+b(%d)is devisible by 3 and 5",a+b);
	}

	else
	{
		printf("\n a+b(%d)is not devisible by 3 and 5",a+b);
	}
	getch();
}