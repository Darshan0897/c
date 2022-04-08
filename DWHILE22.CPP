#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i=1,j;
	while(i<=26)
	{

		   if(i%2==0)
		   {
			printf("\t %c",j+90);
		   }
		   else
		   {
			printf("\t %c",j+64);


		   }
		 i++;
		printf("\n");
	}
	getch();
}
