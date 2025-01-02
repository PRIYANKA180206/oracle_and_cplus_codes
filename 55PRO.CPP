#include<iostream.h>
#include<fstream.h>
void main()
{
// char *data=" ";
 ifstream ifs;
 ifs.open("Demo.txt");
 cout<<"\n Single data reading\n";
 char c;
 while(ifs)
 {
   c=ifs.get();
   cout<<"\n file data is:"<<endl;
   cout<<c;
 }
 ifs.close();
}