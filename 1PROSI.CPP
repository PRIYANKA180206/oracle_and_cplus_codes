//write a program to calculate simple interest
#include<iostream.h>
#include<conio.h>
void main()
{
 float si,p,r,n;
 clrscr();
 cout<<"Enter value of per amount::"; cin>>p;
 cout<<"Enter value of rate::"; cin>>r;
 cout<<"Enter value of number of year::"; cin>>n;
 cout<<""<<endl;
 si=p * r * n/100;
 cout<<"Simple interest is::"<<si;
 getch();
}