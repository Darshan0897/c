#include<stdio.h>
#include<conio.h>
void main()
{
 // area of triangle
  clrscr();
  int breadth,height,area;
  printf("\n enter the value of breadth :");
  scanf("%d",&breadth);
  printf("\n enter the value of height:");
  scanf("%d",&height);
  area=0.5*breadth*height;
  printf("\n the area of triangle is %d",area);
  getch();
}
