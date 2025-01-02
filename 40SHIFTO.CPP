#include<iostream.h>
#include<conio.h>
class shiftop
{
   public:
   char *a;
   shiftop (char *x)
     {
	*a=*x;
     }
   void operator<<(char *a)
     {
	cout<<"Thank you.."<<endl;
     }
   void operator>>(char *b)
     {
       cout<<"Thank you.."<<endl;
     }
};
void main()
{
  clrscr();
  char *x;
  cout<<"Enter string::";
  cin>>x;
  shiftop r(x);
  r<<x;
  r>>x;
  getch();
}
