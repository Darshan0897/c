#include<stdio.h>
#include<conio.h>
 void main()
{
  // devisible by 5 or not
  clrscr();
  int a;
  printf("\n enter the value of a:");
  scanf("%d",&a);
  if (a%5)
  {
     printf("\n\t a is divisible by 5");
  }
  else
  {
     printf("\n\t a is not divisible by 5");
  }
  getch();
}
