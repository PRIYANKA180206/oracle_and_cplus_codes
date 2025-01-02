#include<iostream.h>
#include<fstream.h>
void main()
{
 char *data=" ";
 ifstream ifs;
 ifs.open("Demo.txt");
 cout<<"\n your file pointer position is:"<<ifs.tellg()<<endl;
 ifs>>data;
 cout<<data;
 cout<<"\n your file pointer position is:"<<ifs.tellg()<<endl;
 ifs.seekg(10);
 cout<<"Your file pointer position is:"<<ifs.tellg()<<endl;
 cout<<"\n single data reading\n";
 char c;
 while(ifs)
  {
    c=ifs.get();
    cout<<c;
  }
  cout<<"\n your file pointer position is:"<<ifs.tellg();
  ifs.close();
}