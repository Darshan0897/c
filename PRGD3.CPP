#include<stdio.h>
#include<conio.h>
void main ()
{
   clrscr();
   int unit;
   float amt,surcharge,total_amt;

   printf("\n enter the unit");
   scanf("%d",&unit);

   if(unit<=100)
   {
      amt=(unit*0.6);
      amt=amt+50;
   }
   else if(unit>100 && unit<=300)
   {
      amt=60+((unit-100)*0.8);
      amt=amt+50;
   }
   else if(unit<=300)
   {
      amt=160+((unit-300)*0.9);
      amt=amt+50;
   }

   surcharge=amt*0.15;
   total_amt=amt+surcharge;

   printf("\n total_amt %f rs.",total_amt);
   {
   getch();
   }
}


