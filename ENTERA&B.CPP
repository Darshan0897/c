#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	for(i=65;i<=90;i++)
	{
		if(i%2==1)
		{
			printf("%c : %d\t",i,i);
		}
	}
/*	for(i=97;i<=122;i++)
		if(i%2==0)
		{
			printf("%c : %d\t",i,i);
		}
	}  */
	for(i=97;i<=122;i++)
	{
		if(i%2==0)
		{
		printf("%c : %d\t",i,i);
		}
	}
	getch();
}

