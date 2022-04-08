#include<stdio.h>
#include<conio.h>
void main()
{
      clrscr();
      char ch;
      printf("\n enter character:");
      scanf("%c",&ch);
      if(ch>=65 && ch<=90)
      {
	ch=ch+32;
	printf("\n %c small :",ch);
      }
      else
      {
	ch=ch-32;
	printf("\n %c capital :",ch);
      }
      getch();
      {
    }
}