#include<iostream.h>
#include<conio.h>
class method
{
   public:
   int grno;
    method()
     {
	cout<<"\n Hi I am default constuctor";
     }
     void method1(int grno)
      {
	 method::grno=grno;
	 cout<<"\n method1 one called:"<<grno;
      }
      void method2(int grno,char *nm)
       {
	  method::grno=grno;
	  cout<<"\n method2 two called";
	  cout<<"\n GRno is:"<<grno<<"and student name is:"<<nm;
      }
};
void main()
{
  clrscr();
  method mo1;
  mo1.method1(234);
  mo1.method2(2234,"priyanka");
  getch();
}