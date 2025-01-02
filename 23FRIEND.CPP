//friend function declaration
#include<iostream.h>
#include<conio.h>
class mycalc
{
 int val;
 public:
 void inputdata(int v)
  {
   val=v;
  }
  friend void sum(mycalc m1,mycalc m2);
};
void sum(mycalc m1,mycalc m2)
 {
   cout<<"Sum of two class object value is:"<<(m1.val+m2.val);
 }
void main()
{
 int value;
 clrscr();
 mycalc c1,c2,c3;
 cout<<"Enter value:"; cin>>value;
 c1.inputdata(value);
 cout<<"Enter value:"; cin>>value;
 c2.inputdata(value);
 sum(c1,c2);
 getch();
}