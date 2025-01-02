#include<iostream.h>
#include<conio.h>
//base class
class Base
{
  public:
    void dispb1()
     {
       cout<<"Base class method called."<<endl;
     }
};
//derived class
class  div1: public Base
{
  public:
   void  dispd1()
    {
      cout<<"Derived1 class method called."<<endl;
    }
};
//Another derived class
class  div2: public Base
{
  public:
   void  dispd2()
    {
      cout<<"Derived1 class method called."<<endl;
    }
};
//hybrid class
class hybrid: public div1,public div2
{
  public:
  void disph()
  {
    cout<<"Hybrid class method called"<<endl;
  }
};
void main()
{
 clrscr();
 hybrid h;
 Base b;
 b.dispb1();
 h.dispd1();
 h.dispd2();
 h.disph();
 getch();
}