//write a program to calculate arithmatic oprations for different objects and
// display with appropriate output using friend function
#include<iostream.h>
#include<conio.h>
class Arithopr
{
   public:
   int a,b;
   void inputdata()
   {
     cout<<"Enter value of A:";  cin>>a;
     cout<<"Enter value of B:";  cin>>b;
   }
   friend Arithopr operator +(Arithopr a1,Arithopr a2);

   void display()
    {
      cout<<"\nValue of A is:"<<a;
      cout<<"\nValue of B is:"<<b;
    }
};
  Arithopr operator +(Arithopr a1,Arithopr a2)
   {
      Arithopr a3;
      a3.a=a1.a+a2.a;
      a3.b=a1.b+a2.b;
      return a3;
   }
void main()
{
  clrscr();
  Arithopr A1,A2,A3;
  cout<<"Enter first object values:\n";
  A1.inputdata();
  cout<<"Enter second object values:\n";
  A2.inputdata();
  A3=A1+A2;
  cout<<"\n first object data"<<endl;
  A1.display();
  cout<<"\n second object data"<<endl;
  A2.display();
  cout<<"\n Third Answer object data"<<endl;
  A3.display();
  getch();
}