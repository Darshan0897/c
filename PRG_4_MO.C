#include<stdio.h>
#include<conio.h>
void main()
{       int a=45,b=67,c=76,d=107,e=363,f=96,g=667;
	int mod1,mod2,mod3,mod4,mod5,mod6,mod7;

	clrscr();
	mod1=a%23;
	mod2=b%23;
	mod3=c%23;
	mod4=d%23;
	mod5=e%23;
	mod6=f%23;
	mod7=g%23;
	printf("\n%d mod 23 = %d",a,mod1);
	printf("\n%d mod 23 = %d",b,mod2);
	printf("\n%d mod 23 = %d",c,mod3);
	printf("\n%d mod 23 = %d",d,mod4);
	printf("\n%d mod 23 = %d",e,mod5);
	printf("\n%d mod 23 = %d",f,mod6);
	printf("\n%d mod 23 = %d",g,mod7);

	getch();
}