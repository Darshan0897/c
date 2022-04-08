#include<stdio.h>
#include<conio.h>
void main()
{       char d;
	clrscr();
	printf("ENTER A CHAR. = ");
	scanf("%c",&d);
	if(d=='a' || d=='e' || d=='i'|| d=='o'|| d=='u')
	{
		printf("\n VOVEL = %c",d);
	}
	else
	{
		printf("\n NON VOVEL = %c",d);
	}
	getch();
}