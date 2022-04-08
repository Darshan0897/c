#include<iostream.h>
#include<conio.h>
float sum(float a)
{
   return (a*9/5)+32;

}
void main()
{
  float b,a;
  clrscr();
  cout<<"Enter the celsius :";
  cin>>a;
  b = sum(a);
  cout<<"\n Enter the fanrenheit :"<<b;
  getch ();
}