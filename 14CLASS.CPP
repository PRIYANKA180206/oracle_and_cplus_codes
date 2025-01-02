//write a program to demostrate declaration of class,object and method.
#include<iostream.h>
#include<conio.h>
class Greeting
 {
   public:
   char *name;
   void getdata(char *nm)
    {
      name=nm;
    }
   void welcomemsg()
     {
       cout<<"Welcome to c++ opp......"<<name;
     }
 };
 void main()
  {
    clrscr();
    Greeting obj;//=new Greeting();
    char *nm="MJKACC";
    obj.getdata(nm);
    obj.welcomemsg();
    getch();
  }