//write a program to demostrate class to variable using operator overloading
#include<iostream.h>
#include<conio.h>
class time
{
  int hrs,min;
  public:
  time(int a,int b)
   {
      cout<<"Constructor called with two parameters..."<<endl;
      hrs=a;  min=b;
   }
   operator int();
     ~time()
      {
	cout<<"Destructor called..."<<endl;

      }
};
time::operator int()
{
  cout<<"Class type to basic type conversion..."<<endl;
  return (hrs * 60 + min);
}
void main()
{
  clrscr();
  int h,m,duration;
  cout<<"Enter Hours";
  cin>>h;
  cout<<"Enter Minutes";
  cin>>m;
  time t(h,m);
  duration=t;
  cout<<"Total minutes are "<<duration;
  cout<<" 2nd method operator overloading"<<endl;
  duration = t.operator int();
  cout<<"Total mintutes are "<<duration;
  getch();
}
