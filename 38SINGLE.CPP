//write a program to demostrate single inheritance
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
void main()
{
  clrscr();
  DemoB B1;
  B1.a=10;
  B1.b=20;
  B1.displayA();
  B1.displayB();
  getch();
}