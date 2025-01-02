//object as return type
#include<iostream.h>
#include<conio.h>
class mycalc
{
 public:
 int val;
 void inputdata(int v)
   {
     val=v;
   }
  mycalc sum(mycalc m1,mycalc m2)
   {
     mycalc m3;
     m3.val=m1.val + m2.val;
     return m3;
   }
};
void main()
{
 int value;
 clrscr();
 mycalc c1,c2,c3,c4;
 cout<<"Enter value:"; cin>>value;
 c1.inputdata(value);
 cout<<"Enter value:"; cin>>value;
 c2.inputdata(value);
 c4=c3.sum(c1,c2);
 cout<<"Sum is:"<<c4.val;
 getch();
}