#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	for(i=1;i<=50;i++)
	{
		if(i%2==1)
		{
			printf("\n%d odd",i);
		}
		else
		 {
			printf("\n%d even",i);
		}
	}
	getch();
}