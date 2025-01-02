// write a program to calculate sum of 5 digit
#include<iostream.h>
#include<conio.h>
void main()
{
 long int num,m,sum=0;
 clrscr();
 cout<<"Enter a number:";
 cin>>num;
 while(m>0)
  {
    m=num%10;
    sum=sum+m;
    num=num/10;
  }
  cout<<"sum of 5 digit is="<<sum;
  getch();
}
