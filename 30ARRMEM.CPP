//write a program to generate dynamic constructor with 1D or 2D array memory
//allocation and also distroy allocated memory
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class arrmem
{
  public:
  int *p;
  arrmem()
    {
       p=new int[5];
       for(int x=0; x<5; x++)
	 p[x]=rand()/100;
       for(x=0; x<5; x++)
	 cout<<p[x]<<"\t";
       delete p;
    }
    arrmem(int n)
       {
	 p=new int[n];
	 for(int x=0; x<5; x++)
	    p[x]=rand()/100;
	 for(x=0; x<n; x++)
	   cout<<p[x]<<endl;
	 delete p;
       }
    ~arrmem()
      {
	delete p;
	cout<<"\n Destructor Excute successfully...";
      }
};
void main()
{
  clrscr();
  arrmem am1;
  int n;
  cout<<"Enter No.of Elements:";
  cin>>n;
  arrmem am2(n);
  cout<<"\n Dynamic constructor Array:"<<endl;
  arrmem *am3=new arrmem[5];
  getch();
}