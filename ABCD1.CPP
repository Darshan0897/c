#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,j;
	for(i=65;i<=68;i++)
	{
	   for(j=65;j<=68;j++)
	   {
	    i=j+32;
	    printf("\t %c",i*=2,j*=2);
	   }
	    printf("\n");
	}
	getch();
}

