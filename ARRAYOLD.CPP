#include<stdio.h>
#include<conio.h>
void main()
{
     clrscr();
     int a[10],i,position=0,n;
     for(i=0;i<10;i++)
     {
	printf("value of element:");
	scanf("%d",&a[i]);
     }
     printf("\n value of element:");
     for(i=0;i<10;i++)
     {
	printf("\t%d",a[i]);
     }
     printf("\n");
     scanf("%d",&n);
     for(i=0;i<10;i++)
     {
	if(a[i]!=n)
	++ position;
	else
	break;
    }
    printf("number is %d",position);
    getch();
}

