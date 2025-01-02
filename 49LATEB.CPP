#include<iostream.h>
#include<conio.h>
class Base
{
   public:
    virtual  void display(int x=100)
    {
      cout<<"\n Helloww God byeee...";
      cout<<"\n Base value of x is:"<<x;
    }
};
class Derived : public Base
{
  public:
   virtual void display(int x=100)
    {
      cout<<"\n Thank you for calling me...";
      cout<<"\n Derived value of x is:"<<x;
    }
};
void main()
{
  clrscr();
  Base *b=new Derived();
  b->display();
  b->display(1000);
  getch();
}