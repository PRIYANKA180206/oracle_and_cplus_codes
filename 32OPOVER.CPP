//write a program to demostrate operator overloading
#include<iostream.h>
#include<conio.h>
class Demo
{
  public:
  int x;
  Demo (int a)
   {
      x=a;
   }
   void operator *() {   x=x*x;  }
   void operator -() {   x=-x;   }
   void operator +() {   x=x+x;  }
 //  void operator /() {   x=x/10.0;}
  void display()
  {
    cout<<"\n value of x is:"<<x;
  }
};
void main()
{
  clrscr();
  int data;
  cout<<"Enter value::";
  cin>>data;
  Demo d(data);
  d.display();
  *d;	d.display();
  -d;	d.display();
  +d;	d.display();
// /d;  d.display();
  getch();

}