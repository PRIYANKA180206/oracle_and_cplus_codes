//write a program to demostrate copy constructor
#include<iostream.h>
#include<conio.h>
class DemoA
{
  public:
  DemoA()
  {
     cout<<"\n From DemoA constructor....";
  }
  void message()
  {
     cout<<"\n Good morning";
  }
};
class DemoB
{
  public:
  DemoB(DemoA d)
  {
     d.message();
  }
};
void main()
{
  clrscr();
  DemoA DA;
  DemoB DB(DA);
  getch();
}