#include<iostream.h>
#include<conio.h>
class Animal
{
  public:
  void sound()
   {
     cout<<"Animal makes a sound"<<endl;
   }
};
class Dog: public Animal
{
  public:
  void sound()
   {
     cout<<"Dog baeks."<<endl;
   }
};
class Cat: public Animal
{
  public:
  void sound()
  {
   cout<<"Cat meows."<<endl;
  }
};
void main()
{
 clrscr();
 Animal animal;
 Dog dog;
 Cat cat;
 animal.sound();
 dog.sound();
 cat.sound();
 getch();
}