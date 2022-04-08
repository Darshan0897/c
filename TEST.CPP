#include<iostream.h>
#include<conio.h>
float sum(float maths,float physics, float chemistry)
{
 return(maths+physics+ chemistry);
}
void main()
{
  int maths,physics,per,chemistry,total;
  clrscr();
  cout<< "Enter marks maths :";
  cin>>maths;
  cout<<"Enter marks physics :";
  cin>>physics;
  cout<<"Enter marks chemistry :";
  cin>>chemistry;
  total = sum(maths,physics,chemistry);
  cout<<"\n total"<<total;
  per = total/3;
  cout<<"\n per"<<per;
  getch ();
}