#include<stdio.h>
#include<conio.h>
 int main()
 {
	int x,y,a,b;
       //	a=x+x;
      //	b=y-x;
	clrscr();
	printf(" enter value x :",a);
	scanf("\n%d",&x);
	printf("\n enter value y :",b);
	scanf("\n%d",&y);
	a=x+x;
	b=y-x;
       /*	scanf("%d,\n%d",&a,&b)*/
	printf("\n x : %d",a);
	printf("\n y : %d",b);
	getch();
	return 0;
 }