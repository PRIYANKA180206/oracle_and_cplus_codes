//series 1 3 4 6 8 12.....
#include<iostream.h>
void main()
 {
   int no;
   cout<<"Enter n no of value:";
   cin>>no;
   int a=0, b=1, c=0;
   cout<<" "<<(a+1)<<" "<<(b+2);
   for(int x=3; x<=no; x++)
   {
    c=a+b;
    cout<<" "<<(c+x);
    a=b;
    b=c;
   }
 }