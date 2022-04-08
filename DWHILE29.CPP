#include<stdio.h>
#include<conio.h>
   void main()
{
   clrscr();
   int i=1,k=65;
   while(i<=5);
   {
	 int j=1;
	 while(j<=i)
	 {
		if(i%2==0)
		{
			    printf("\t %c",k+32);
		}
		else
		{
			    printf("\t %c",k);
		}
	 j++;
	 k++;
	 }
	 i++;
	 printf("\n");

   }
   getch();
}

