#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
  ofstream filew("bcamorning.txt");
  clrscr();
  char *input;
  cout<<"Enter your message:";
  cin>>input;
  filew<<input;
  cout<<endl<<"File data written";
  filew.close();
  getch();
}

