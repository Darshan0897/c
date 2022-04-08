#include<stdio.h>
#include<conio.h>
void  main()
{
     clrscr();
     int x,y;
     printf("\n enter the value x:");
     scanf("%d",&x);
     printf("\n enter the value y:");
     scanf("%d",&y);

     if(x<2000 && x>3000)
     {
       printf("\n\t x is printed");
     }
     else
     {
       printf("\n\t x is not printed");
     }
     if(y>100 && y<500)
     {
       printf("\n\t y is printed");
     }
     else
     {
       printf("\n\t y is not printed");
     }
     getch();
 }


