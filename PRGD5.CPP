#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	float tax=0,salary;
	printf("\n enter the amount of salary:");
	scanf("%f",&salary);

	if(salary>0 && salary<=2500)
	{
	  tax=tax+0.0*(salary-2500);
	}
	else if(salary>2500 && salary<=5000)
	{
	  tax=tax+0.1*(salary-2500);
	}
	else if(salary>5000 && salary<=10000)
	{
	  tax=tax+0.2*(salary-5000);
	}
	else if(salary>=10000)
	{
	  tax=tax+0.3*(salary-10000);
	}

	printf("\n net income tax  to be paid is %f:",tax);
	{
	getch();
	}

}