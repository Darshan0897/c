#include<stdio.h>
#include<conio.h>
void main()
{
	float bs , gs ,hra , da;
	clrscr();
	printf("enter basic salary :");
	scanf("%f",&bs);
	if(bs<5000)
	{
		hra=bs*8/100;
		da=bs*20/100;
	}
	else if(bs>=5000 && bs<=10000)
	{
		hra=bs*12/100;
		da=bs*30/100;
	}
	else if(bs>=10000 && bs<=15000)
	{
		hra=bs*15/100;
		da=bs*40/100;
	}
	else if(bs>15000)
	{
		hra=bs*20/100;
		da=bs*50/100;
	}
	gs=bs+hra+da;

	printf("gs=%f",gs);
	getch();
}