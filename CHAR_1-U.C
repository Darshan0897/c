#include<stdio.h>
#include<conio.h>
void main()
{
	char a;
	clrscr();
	printf("ENTER A CHARACHTER =");
	scanf("%c",&a);
	if(a>='A' && a<='Z')
	{
		printf("\nchar. is capital %c",a+32);
	}
	else
	{
		printf("\ncharacter is small %c",a-32);
	}

	getch();
}