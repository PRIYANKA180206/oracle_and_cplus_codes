#include<iostream.h>
#include<conio.h>
class demoA
{
  public:
    int a;
    void inputdata()
     {
       cout<<"\n Parent class...";
       cout<<"\n Enter value of A:"; cin>>a;
     }
     void display()
      {
	cout<<"value of A is:"<<a;
      }
};
class demoB : public demoA
{
  public:
    int a,b;
    void inputdata()
     {
       demoA::inputdata();
       cout<<"\n child class...";
       cout<<"\n Enter value of A:";  cin>>a;
       cout<<"\n Enter value of B:";  cin>>b;
     }
    void display()
      {
	demoA::display();
	 cout<<"\n Sum of A and B:"<<(a+b);
      }
};
void main()
{
  clrscr();
  demoB db;
  db.inputdata();
  db.display();
  getch();
}