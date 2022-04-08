#include<stdio.h>
#include<conio.h>
void main()
{       int a,b,c,d,e;
	clrscr();
	printf("Enter unit =");
	scanf("%d",&a);
	b=a*1;
	c=b*0.5;
	d=c*0.5;
	e=a+b+c;

	if(a>1 && a<=200)
	{
		printf("\n %d RUPESS",b);
	}
	else if(a>201 && a<=300)
	{
		printf("\n %d RUPESS",c);
	}
	else
	{
		printf("\n RUPESS",e);
	}
	getch();
}