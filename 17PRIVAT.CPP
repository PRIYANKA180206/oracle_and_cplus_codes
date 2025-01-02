//write a program to demostrate private member declartion and multiple object opration
#include<iostream.h>
#include<conio.h>
class test
{
 int A;
 void readData();
 public:
 void inputData(int a);
};
void main()
{
 clrscr();
 int val;
 cout<<"Enter value:";
 cin>>val;
 test t1,t2,t3;
 t1.inputData(val);
 cout<<"\n Enter value:"; cin>>val;
 t2.inputData(val);
 cout<<"\n Enter value:"; cin>>val;
 t3.inputData(val);
}
void test::readData()
{
  cout<<"\n value is:"<<A;
}
void test::inputData(int a)
{
  A=a;
  readData();
}