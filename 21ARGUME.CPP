//class object as argument
#include<iostream.h>
#include<conio.h>
class sumcal
{
 int val;
 public:
 void inputdata(int v)
 {
  val=v;
 }
 void sum(sumcal s1,sumcal s2)
  {
    cout<<"Sum of two class object value is:"<<(s1.val+s2.val);
  }
};
void main()
{
 int value;
 clrscr();
 sumcal c1,c2,c3;
 cout<<"Enter value:";
 cin>>value;
 c1.inputdata(value);
 cout<<"Enter value:";
 cin>>value;
 c2.inputdata(value);
 c3.sum(c1,c2);
 getch();
}
