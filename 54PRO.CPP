#include<iostream.h>
#include<fstream.h>
void main()
{
 char *c;
 ofstream file1("ABC.txt");
 cout<<"Enter your string";
 cin>>c;
 file1<<c;
 cout<<"file data written successfully....";
 file1.close();
 }