
#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int m1,m2,m3,total,per;
	printf("\n enter the marks of m1=");
	scanf("%d",&m1);
	printf("\n enter the marks of m2=");
	scanf("%d",&m2);
	printf("\n enter the marks of m3=");
	scanf("%d",&m3);
	total=(m1+m2+m3);
	printf("\n enter the total marks %d",total);
	per=(total/3);
	printf("\n enter the avg %d", per);

	if (per>75)
	{
	  printf("\n\t grade A");
	}
	else if (per>60 && per<75)
	{
	  printf("\n\t grade b");
	}
	else if (per>45 && per<60)
	{
	  printf("\n\t grade c");
	}
	else if (per>35 && per<45)
	{
	  printf("\n\t grade d");
	}
	else if (per>0 && per<35)
	{
	  printf("\n\t fail");
	}
	getch();

}





