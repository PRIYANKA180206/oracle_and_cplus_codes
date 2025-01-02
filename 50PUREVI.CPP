#include<iostream.h>
#include<conio.h>
class Base
{
  public:
    Base()
      {
	cout<<"\n Good morning from parent class...";
      }
    virtual void display()=0;
};
class Derived : Base
{
   public:
     Derived()
      {
	cout<<"\n Good morning from child class...";
      }
     void display()
     {
       cout<<"\n Good byee from Derived display...";
     }
};
void main()
{
  clrscr();
  Derived D1;
  D1.display();
  getch();
}