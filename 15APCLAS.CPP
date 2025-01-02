//write a program to generate arithmetic calculation class with all arithmetic operation method data must be inputted from  user.
#include<iostream.h>
#include<conio.h>
class Arithop
{
 int firstvalue,secondvalue;
 public:
 void inputdata(int first,int second)
   {
      firstvalue=first;
      secondvalue=second;
   }
 void addition()
   {
     cout<<"\n Addition is:"<<firstvalue + secondvalue;
   }
  void substraction()
   {
     cout<<"\n Substraction is:"<<firstvalue - secondvalue;
   }
   void multiplication()
   {
     cout<<"\n Multiplication is:"<<firstvalue * secondvalue;
   }
  void division()
   {
     cout<<"\n Division is:"<<firstvalue / secondvalue*1.0;
   }
   void modulus()
   {
     cout<<"\n Modulus is:"<<firstvalue % secondvalue;
   }
};
 void main()
  {
    Arithop ao;
    int x,y;
    clrscr();
    cout<<"Enter first value:"; cin>>x;
    cout<<"Enter second value:"; cin>>y;
    ao.inputdata(x,y);
    ao.addition();
    ao.substraction();
    ao.multiplication();
    ao.division();
    ao.modulus();
  getch();
 }
