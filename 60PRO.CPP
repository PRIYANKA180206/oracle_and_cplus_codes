#include<iostream.h>
void main()
{
 float x,y;
 cout<<"Enter first vlaue:";
 cin>>x;
 cout<<"Enter second value:";
 cin>>y;
 try
  {
    if(y==0)
     {
       throw runtime_error("valueis zero with divisible error...";
     }
     double ans=x/y;
     cout<<"Division is:"<<ans;
  }
  catch (const std::exception)
   {
     cout<<"Error code"<<error<<"Error is:"<<e.what()<<"\n";
   }
}