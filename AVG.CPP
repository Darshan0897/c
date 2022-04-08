#include<stdio.h>
#include<conio.h>
void main()
{
	float sci[10],eng[10],math[10],total[10],avg[10],i;
	clrscr();
	for(i=0;i<3;i++)
	{
		printf("Enter sci[%d] : ",i);
		scanf("%f",&sci[i]);
		printf("Enter eng[%d] : ",i);
		scanf("%f",&eng[i]);
		printf("Enter math[%d] : ",i);
		scanf("%f",&math[i]);
		total[i]=sci[i]+eng[i]+math[i];
		avg[i]=total[i]/3;
	}
	for(i=0;i<3;i++)
	{
		printf("\n sci : %.2f",sci[i]);
		printf("\t eng : %.2f",eng[i]);
		printf("\t math : %.2f",math[i]);
		printf("\n total : %.2f",total[i]);
		printf("\t avg : %.2f",avg[i]);
	}
	if(avg[i]>=75)
	{
		printf(" grade A");
	}
	if(avg[i]>=60 && avg[i]<=75)
	{
		printf(" grade B");
	}
	if(avg[i]>=45 && avg[i]<=60)
	{
		printf(" grade C");
	}
	if(avg[i]>=35 && avg[i]<=45)
	{
		printf(" grade D");
	}
	else
	{
		printf(" fail");
	}
	getch();
}
