#include<stdio.h>
#include<conio.h>
void main()
{
    clrscr();
    int i=5,j;
    i:
    if(i>=1)
    {
	j=5;
	j:
	if(j>=i)
	{
		printf("\t %d",j);
		j--;
		goto j;
	}
	printf("\n");
	i--;
	goto i;
    }
    getch();
}