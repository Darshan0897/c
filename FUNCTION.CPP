  #include<iostream.h>
  #include<conio.h>
  class test
  {
      public:
      void sum(int x,int y)
      {
	cout<<" sum 1: "<<x+y;
      }
      void sum(double x,double y)
      {
	cout<<" sum 2: "<<x+y;
      }
  };
  int main()
  {
    clrscr();
    test t1;
    t1 . sum(10,20);
    t1 . sum(10.20,20.10);
    getch();
    return 0;
  }
