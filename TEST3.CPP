#include<iostream.h>
#include<conio.h>
float money(float doller,float rupees)
{
   return (doller*rupees);
}
void main()
{
  float doller,rupees=70,dr;
  clrscr ();
  cout<<"Enter the value doller" ;
  cin>>doller;
  dr=money(doller,rupees);
  cout<<" the value rupees"<<dr;
  getch();

}

