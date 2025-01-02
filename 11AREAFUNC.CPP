//write a program to calculate aera of rectangle, circle and triangle perforn all the calculation based on types of UDF.
#include<iostream.h>
#include<conio.h>
//without argument without return
void rectangle();
void triangle();
void circle();
float length,height,radius;
void main()
 {
   clrscr();
   cout<<"Enter length:"; cin>>length;
   cout<<"Enter height:"; cin>>height;
   cout<<"Enter radius:"; cin>>radius;
   rectangle();
   triangle();
   circle();
 }
 void rectangle()
  {
    cout<<"Length of rectangle is::"<<length<<endl;
    cout<<"Height of rectangle is::"<<height<<endl;
    float area=length*height;
    cout<<""<<endl;
    cout<<"Area of rectangle::"<<area<<endl;
 }
 void triangle()
  {
    cout<<"Length of triangle is::"<<length<<endl;
    cout<<"Height of triangle is::"<<height<<endl;
    cout<<""<<endl;
    cout<<"Area of triangle::"<<((1.0/2.0)*length*height)<<endl;
  }
 void circle()
  {
    cout<<"Radius of circle is::"<<radius<<endl;
    cout<<""<<endl;
    cout<<"area of circle is::"<<(3.14*radius*radius);
  }