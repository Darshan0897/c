#include<iostream.h>
#include<conio.h>
class Example
{
  public:
  int a,b;
  Example(){}
  Example (int a,int b)
  {
    this -> a=a;
    this -> b=b;
  }
  Example add (Example Ea,Example Eb)
  {
    Example Ec;
    Ec.a = Ea.a+Eb.a;
    Ec.b = Ea.b+Eb.b;
    return Ec;
  }

} ;
void main()
{
  Example E1(20,20),E2(30,30),E3(0,0);
  clrscr ();
  cout<<"Intial value :";
  cout<<"E1.a :"<<E1.a<<"\t E1.b :"<<E1.b
      <<"E2.a :"<<E2.a<<"\t E2.b :"<<E2.b
      <<"E3.a :"<<E3.a<<"\t E3.b :"<<E3.b;

      E3 = E3.add(E1,E2);

  cout<<"\n\n new value \n";
  cout<<"E1.a :"<<E1.a<<"\t E1.b :"<<E1.b
      <<"E2.a :"<<E2.a<<"\t E2.b :"<<E2.b
      <<"E3.a :"<<E3.a<<"\t E3.b :"<<E3.b;
  getch();
}




