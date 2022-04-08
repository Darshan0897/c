#include<stdio.h>
#include<conio.h>
  void main()
{
 // devisible by 5 and 3 or not
  clrscr();
  int n;
  printf("\n enter the value of a:");
  scanf("%d",&n);
  if((n%5==0)&&(n%3==0))
  {
      printf("\n\t n is devisible by 5 and 3");
  }
  else
  {
      printf("\n\t n is not devisible by 5 and 3");
  }
  getch();
}