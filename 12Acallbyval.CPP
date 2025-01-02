//call by value
#include<iostream.h>
#include<conio.h>
void swap(int first,int second)
{
 first=first+second;
 second=first-second;
 first=first-second;
 cout<<"After swapping first value is:"<<first<<endl<<"and second value is:"<<second;
}
void main()
{
 int value1,value2;
 clrscr();
 cout<<"Enter first value::"; cin>>value1;
 cout<<"Enter second value::"; cin>>value2;
 swap(value1,value2);
 getch();
}