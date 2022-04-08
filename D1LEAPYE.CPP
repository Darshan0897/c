#include<stdio.h>
#include<conio.h>
void main()
{
   clrscr();
   int year;
   printf("\n enter year");
   scanf("%d",&year);
   if(( year%4==0 && year %100!=0)||(year%400==0))
   {
     printf("\n %d is leap year:",year);
   }
   else
   {
     printf("\n %d is not a leap year:",year);
   }
   getch();
   {
}
}


