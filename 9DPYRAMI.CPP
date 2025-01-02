//write a program code to generate diamond pyramid
#include<iostream.h>
#include<conio.h>
void main()
{
 int n,i,j;
 clrscr();
 cout<<"Enter the number of rows for the diamond pyramid:";
 cin>>n;
 for(i=0; i<=n; i++)
  {
    for(j=0; j<=n-i; j++)
     cout<<" ";
    for(j=1; j<=2*i-1; j++)
      cout<<"*";
      cout<<endl;
  }
  for(i=n-1; i>=1; i--)
    {
      for(j=1; j<=n-i; j++)
      cout<<" ";
      for(j=1; j<=2*i-1; j++)
      cout<<"*";
      cout<<endl;
    }
  getch();
}