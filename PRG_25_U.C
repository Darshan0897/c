#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a;
	clrscr();
	printf("ENTER A NUMBER =");
	scanf("%d",&n);
	for (a=1; a<=n; a++)
	{
		printf("\n%d",a);
	}
	getch();
}