#include<stdio.h>
#include<conio.h>
   int main()
{
   clrscr();
   int i,a=0,b=1,c,n;
   printf("\n enter the value n:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
     printf("\t %d",a);
     c=a+b;
     a=b;
     b=c;
   }
   getch();
}

