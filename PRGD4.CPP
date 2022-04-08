#include<stdio.h>
#include<conio.h>
  void main()
{
   float basic_salary,gross_salary,hra,da;
   clrscr();

   printf("\n enter the value of basic salary:");
   scanf("%f",&basic_salary);

   if(basic_salary<5000)
   {
      hra=basic_salary*0.8;
      da=basic_salary*0.20;
   }
   else if(basic_salary>=5000 && basic_salary<=10000)
   {
      hra=basic_salary*0.12;
      da=basic_salary*0.30;
   }
   else if(basic_salary>=10000 && basic_salary<=15000)
   {
      hra=basic_salary*0.15;
      da=basic_salary*0.40;
   }
   else if(basic_salary>15000)
   {
      hra=basic_salary*0.20;
      da=basic_salary*0.50;
   }

   gross_salary=basic_salary+hra+da;
   printf("\n gross_salary %f:",gross_salary);
   {
   getch();
   }
}
