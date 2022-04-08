#include<stdio .h>
#include<conio.h>
#include<stdlib.h>
int d=0;
void withdraw()
{
	int b;
	printf("How much Money you wanty to withdraw: ");
	scanf("%d",&b);
	d=b-d;
	printf("After Withdraw Your Money is: %d",d);
}
void deposite()
{
	int c;
	printf("How much Money you want to deposite: ");
	scanf("%d",&c);
	d=d+c;
	printf("After Deposite Your Money is: %d",d);
}
void main()
{
	int a;
	clrscr();
	label:
	printf("\n1. You want to Withdraw");
	printf("\n2. You want to deposite");
	printf("\n3. Exit");
	printf("\nEnter a Number: ");
	scanf("%d",&a);
	if(a==1)
	{
		withdraw();
	}
	else if(a==2)
	{
		deposite();
	}
	else {
		exit(0);
	}
	goto label;
	getch();
}































