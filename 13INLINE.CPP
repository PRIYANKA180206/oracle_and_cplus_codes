//write a program to demostrate inline function
#include<iostream.h>
#include<conio.h>
inline void calculatesum(int x,int y)
 {
   cout<<"sum of x and y is:"<<(x+y)<<endl;
 }
void main()
 {
   int first,second;
   clrscr();
   cout<<"Enter first value:";
   cin>>first;
   cout<<"Enter second value:";
   cin>>second;
   calculatesum(first,second);
   calculatesum(55,20);
   calculatesum(100,300);
  getch();
 }