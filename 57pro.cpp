#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  ofstream ofs("newfile.txt");
  ifstream ifs;
  ifs.open("54pro.cpp");
  char c;
  while(ifs)
  {
   c=ifs.get();
   ofs.put(c);
  }
  cout<<"file copied !!!!";
  ifs.close();
  ofs.close();
  return 0;
}