#include<stdio.h>
#include<conio.h>
    void main()
{
	clrscr();
	int i=65,j;
	do
	{
		int j=65;
		while(j<=68)
	       {
		     printf("\t %c",i,j);
		     j++;
	       }

	i++;
	printf("\n");
       }while(i<=68);
       getch();
}