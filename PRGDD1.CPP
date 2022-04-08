#include<stdio.h>
#include<conio.h>
   void main()
{
   char ch;
   clrscr();
   printf("\n enter  character=");
   scanf("%c",&ch);
   if (ch>='A' && ch<='Z')
   {
      printf("\ncharacter is small : %c:",ch+32);
   }
   else
   {
      printf("\nchaaracter is capital : %c:",ch-32);
   }
   getch();

}