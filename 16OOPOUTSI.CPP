//write a program to demostrate outside function declaration of class
#include<iostream.h>
#include<conio.h>
class demoA
{
 public:
 char *user;
 void welcomeuser (char *c);
 void displayuser();
};
void main()
{
 clrscr();
 char *ch;
 cout<<"Enter user name:";
 cin>>ch;
 demoA da;
 da.welcomeuser(ch);
 da.displayuser();
 getch();
}
void demoA::welcomeuser(char *c)
 {
   user=c;
 }
void demoA::displayuser()
  {
    cout<<"Welcome "<<user<<" into c++ OO programming....";
  }
