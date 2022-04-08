#include<stdio.h>
#include<conio.h>
void main()
{       int a=45,b=67,c=76,d=107,e=363,f=96,g=667;
	int mod1,mod2,mod3,mod4,mod5,mod6,mod7;

	clrscr();
	mod1=a%17;
	mod2=b%17;
	mod3=c%17;
	mod4=d%17;
	mod5=e%17;
	mod6=f%17;
	mod7=g%17;
	printf("\n%d mod 17 = %d",a,mod1);
	printf("\n%d mod 17 = %d",b,mod2);
	printf("\n%d mod 17 = %d",c,mod3);
	printf("\n%d mod 17 = %d",d,mod4);
	printf("\n%d mod 17 = %d",e,mod5);
	printf("\n%d mod 17 = %d",f,mod6);
	printf("\n%d mod 17 = %d",g,mod7);

	getch();
}