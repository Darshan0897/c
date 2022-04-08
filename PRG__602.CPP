#include<stdio.h>
#include<conio.h>
 void main()
 {
  // area of circle
   clrscr();
   int radius,pi=3.14,area; //radius=10
   printf("\n enter the value of radius:");
   scanf("%d",&radius);
   area=pi*radius*radius;
   printf("\n the area of circle is %d",area);
   getch();
}


