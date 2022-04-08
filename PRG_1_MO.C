#include<stdio.h>
#include<conio.h>
void main()
{       int a=45,b=67,c=76,d=107,e=363,f=96,g=667, mod1,mod2,mod3,mod4,mod5,mod6,mod7;
	clrscr();
	mod1=a%5;
	mod2=b%5;
	mod3=c%5;
	mod4=d%5;
	mod5=e%5;
	mod6=f%5;
	mod7=g%5;
	printf("\n%d mod 5 = %d",a,mod1);
	printf("\n%d mod 5 = %d",b,mod2);
	printf("\n%d mod 5 = %d",c,mod3);
	printf("\n%d mod 5 = %d",d,mod4);
	printf("\n%d mod 5 = %d",e,mod5);
	printf("\n%d mod 5 = %d",f,mod6);
	printf("\n%d mod 5 = %d",g,mod7);

	getch();
}