//write a program to check inputed AGE
#include<iostream.h>
#include<conio.h>
void main()
{
int age;
clrscr();
cout<<"Enter your age:";
cin>>age;
if(age<13)
 {
  cout<<"Child\n";
 }
 else if(age>=13 && age<20)
  {
  cout<<"Teenager\n";
  }
  else if(age>=20 && age<35)
   {
    cout<<"Younger\n";
   }
   else
    {
      cout<<"Older\n";
    }
 getch();
}