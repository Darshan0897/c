#include<stdio.h>
#include<conio.h>
   void main()
{
   clrscr();
   char ch;
   printf("\n enter ch character:");
   scanf("%c",&ch);
   if(ch<='e')
   {
     printf("\n character before e=",ch);
   }
   else if(ch>='e' && ch<='j')
   {
     printf("\n character in between e and j %c",ch);
   }
   else if(ch>='j' && ch<='o')
   {
     printf("\n character in between j and o %c",ch);
   }
   else if(ch>='o'&& ch<='t')
   {
     printf("\n character in between o and t %c=",ch);
   }
   else if(ch>='t' && ch<='y')
   {
     printf("\n character in between t and y %c=",ch);
   }
   else if(ch>='y')
   {
    printf("\n character after y %c=",ch);
   }


   getch();


}
