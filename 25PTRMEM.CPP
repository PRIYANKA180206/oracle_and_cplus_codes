//write a program to demostrate pointer to member variable or member function
#include<iostream.h>
#include<conio.h>
class Demo
{
 public:
 int val;
 void input(int v)
 {
   val=v;
 }
 void display()
  {
    cout<<"\n Value is:"<<val;
  }
};
void main()
{
 clrscr();
 Demo d1;
 d1.input(10);
 int *ptr = &d1.val;
 int Demo::*p = &Demo::val;
 cout<<"\n Pointer value is:"<<ptr;
 cout<<"\n Pointer assign value is:"<<*ptr;
 //cout<<"\n Member pointer value is:"<<Demo::p;
 cout<<"\n Member pointer assign value is"<<d1.*p;
 d1.display();
 getch();
}