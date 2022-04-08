#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1 , j ;
	clrscr();
	x:
	if(i<=5)
	{
		j=1;
		y:
		if(j<=i)
		{
			printf("* ",j);
			j++;
			goto y;
		}
		printf("\n");
		i++;
		goto x;

//	   		printf("\n*",j++);
//	   		goto y;

		 /*	if(i==1||i==5||j==1||j==i)
				printf("* ");
			else
				printf(" ");      */
	}
	getch();
}


