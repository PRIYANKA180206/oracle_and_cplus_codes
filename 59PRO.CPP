#include<iostream.h>
#include<conio.h>
#include<fstream.h>
int main(int ac,char *av[])
{
 if(ac<=1)
  {
    cout<<"No Argument or file name given....";
    return 0;
  }
  ifstream ifs;
  ofstream ofs(av[2]);
  ifs.open(av[1]);
  char c;
  while (!ifs.eof())
   {
     c=ifs.get();
     ofs.put(c);
     cout<<" "<<c;
   }
    cout<<endl<<av[2]<<endl;
    cout<<"\t 1 file (s) copied...";
    ifs.close();
    ofs.close();
    return 0;
}