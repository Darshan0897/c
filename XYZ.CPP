#include<stdio.h>
#include<conio.h>
void main()
{
	float a;
	clrscr();
	printf ("a=");
	scanf ("%f",&a);
	if (a<5000)
	{
		b=(a*.28+a);
		printf ("Gross salery=%f",b);
	}
	if (a>5000)
	{
		b=(a*.42+a);
		printf ("Gross Salery=%f",b);
	}

	getch();
}

