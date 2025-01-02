//write a program to demostrate constructor declaration and calling of perameterized consructor
#include<iostream.h>
#include<conio.h>
class A
{
 public:
 A()
  {
     cout<<"\n Good morning from default constructor";
  }
 A(char *a)
  {
   cout<<"\n From perameterized constructor Good bye...."<<a;
  }
};
void main()
{
 clrscr();
 A a1;
 A a2("XYZ");
 getch();
}
