#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a=1,b=50;
	clrscr();
       //	printf("ENTER A VALUE =");
	//scanf("%d",b);

	for(i=a;i<=b;i++)
	{
		if(i%2==1)
		{
			printf("\n odd number is = %d ",i);
		}
	}
	getch();
}