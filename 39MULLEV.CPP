//write a program to demostrate multilevel inheritance
#include<iostream.h>
#include<conio.h>
class DemoA
{
  public:
  int a;
  DemoA()
   {
     cout<<"\n Good morning from DemoA constructor....";
   }
  void displayA()
    {
      cout<<"\n value of A is:"<<a;
    }
};
class DemoB: public DemoA
{
  public:
  int b;
  DemoB()
   {
     cout<<"\n Good morning from DemoB constructor....";
   }
  void displayB()
    {
      cout<<"\n value of B is:"<<b;
    }
};
class DemoC: public DemoB
{
  public:
  int c;
  DemoC()
   {
     cout<<"\n Good morning from DemoC constructor....";
   }
  void displayC()
    {
      cout<<"\n value of B is:"<<c;
    }
};
void main()
{
  clrscr();
  DemoC C1;
  C1.a=10;
  C1.b=20;
  C1.c=30;
  C1.displayA();
  C1.displayB();
  C1.displayC();
  getch();
}