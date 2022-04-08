#include<stdio.h>
#include<conio.h>
void main ()
{
     // age>=18......voting eligible
     // age< 18.......not eligible for voting
     clrscr();
     int age;
     printf("enter age:");
     scanf("%d",&age);

     if (age>=18)
     {
	printf("eligible for voting");
     }
     else
     {
	printf("not eligible for voting");
     }
     getch();
}