#include<iostream.h>
#include<conio.h>
class B { };
class D:public B { };
void main()
{
  clrscr();
  B *b=new D;
  D *d=dynamic_cast <D*> (b);
  if(d != NULL)
    cout<<"Works!";
  else
    cout<<"Can not cast B* to D*";
  getch();
}