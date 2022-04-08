#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	printf("enter alphabet :");
	scanf("%c",&ch);
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
	{
		printf("\n %c is vowels",ch);
	}
	else
	{
		printf("\n %c is consonats",ch);
	}
	getch();
}