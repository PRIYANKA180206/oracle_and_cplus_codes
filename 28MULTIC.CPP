//write a program to demostrate multiple constructor declaration to calculate
//arithmetic operation as per the two values of each constuctor
#include<iostream.h>
#include<conio.h>
class Arithconst
{
 public:
 float x,y;
 Arithconst()
  {
    x=50.5;
    y=30.5;
  }
  Arithconst(float a)
   {
     x=a;
     y=20.5;
   }
  Arithconst(float a,float b)
   {
     x=a;
     y=b;
   }
  void Addition()
       { cout<<"\n Addition is::"<<(x+y); }
  void substraction()
       {  cout<<"\n Substraction is::"<<(x-y); }
  void multiplication()
       { cout<<"\n Multiplication is::"<<(x*y); }
  void division()
      { cout<<"\n Division is::"<<(x/y); }
  //void modulus\()
     //{ cout<<"\nModulus is::"<<(x%y); }
};
void main()
{
  clrscr();
  Arithconst ac1;
  Arithconst ac2(10.5);
  Arithconst ac3(3.5,5.5);
  cout<<"\n Default constructor data:";
  ac1.Addition(); ac1.substraction(); ac1.multiplication();
  ac1.division(); //ac1.mudulus();
  cout<<"\n Single perameter constructor data:";
   ac2.Addition(); ac2.substraction(); ac2.multiplication();
  ac2.division(); //ac2.mudulus();
  cout<<"\n Two parameter constructor data:";
   ac3.Addition(); ac3.substraction(); ac3.multiplication();
  ac3.division(); //ac3.mudulus();
  getch();
}



