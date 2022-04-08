#include<stdio.h>
#include<conio.h>
void main()
{
    clrscr();
    int i,sum=0;
    for(i=1;i<=10;i++)
    {
	sum+=i;
	printf("\n %d",sum);
	i++;
    }
    getch();

}
