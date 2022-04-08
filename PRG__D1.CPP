#include<stdio.h>
#include<conio.h>
 void main()
 {
   // find smallest value
   int a,b;
   clrscr();
   printf("\n enter the value of a:");
   scanf("%d",&a);
   printf("\n enter the value of b:");
   scanf("%d",&b);
   if(a<b)
   {
       printf("\n\t a(%d) is smallest....",a);
   }
   else
   {
       printf("\n\t b(%d) is smallest......",b);
   }
   getch();
}
