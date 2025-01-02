#include<iostream.h>
#include<conio.h>
class demo1
{
   public:
   void display1()
    {
      cout<<"Demo1 class method called"<<endl;
    }
};
class demo2
{
  public:
   void display2()
    {
      cout<<"Demo2 class method called"<<endl;
    }
};
class Derived: public demo1, public demo2
{
  public:
  void dispdrived()
   {
     cout<<"Derived class method called"<<endl;
   }
};
void main()
{
  clrscr();
  Derived obj;
  obj.display1();
  obj.display2();
  obj.dispdrived();
  getch();
}