//write a program to demosrate static memeber variable and static member function
#include<iostream.h>
#include<conio.h>
class Totalstudent
{
  int grno;
  static int cnt;
  public:
    int count;
      void setgrno(int gr)
      {
	grno=gr;
	cnt++;
	count++;
      }
      void getTotalstudent()
      {
	cout<<"\n Total number of students are:"<<cnt;
	cout<<"\n Total number of students as per object:"<<count;
      }
};
int Totalstudent::cnt=0;
void main()
{
 clrscr();
 int grno;
 Totalstudent ts1,ts2,ts3;
 ts1.count=ts2.count=ts3.count=0;
 cout<<"\n Enter first object values:"<<endl;
 for(int x=1; x<=3; x++)
  {
    cout<<"Enter GRno.:";
    cin>>grno;
    ts1.setgrno(grno);
  }
  cout<<"\n Enter second object values:"<<endl;
  for(x=1; x<=5; x++)
    {
     cout<<"Enter GRno.:";
     cin>>grno;
     ts2.setgrno(grno);
   }
  cout<<"\n Enter third object values:"<<endl;
    for(x=1; x<=2; x++)
      {
	cout<<"Enter GRno.:";
	cin>>grno;
	ts3.setgrno(grno);
     }
   cout<<"\n Value of first object:"<<endl;
     ts1.getTotalstudent();
   cout<<"\n Value of sencond object:"<<endl;
     ts2.getTotalstudent();
   cout<<"\n Vlaue of third object:"<<endl;
     ts3.getTotalstudent();
   getch();
}