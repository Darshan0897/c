#include<stdio.h>
#include<conio.h>
void main()
{       int a=45,b=67,c=76,d=107,e=363,f=96,g=667;
	int mod1,mod2,mod3,mod4,mod5,mod6,mod7;

	clrscr();
	mod1=a%8;
	mod2=b%8;
	mod3=c%8;
	mod4=d%8;
	mod5=e%8;
	mod6=f%8;
	mod7=g%8;
	printf("\n%d mod 8 = %d",a,mod1);
	printf("\n%d mod 8 = %d",b,mod2);
	printf("\n%d mod 8 = %d",c,mod3);
	printf("\n%d mod 8 = %d",d,mod4);
	printf("\n%d mod 8 = %d",e,mod5);
	printf("\n%d mod 8 = %d",f,mod6);
	printf("\n%d mod 8 = %d",g,mod7);

	getch();
}