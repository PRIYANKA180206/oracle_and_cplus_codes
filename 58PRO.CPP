#include<iostream.h>
#include<conio.h>
int main(int ac,char *av[])
{
  clrscr();
  if(ac<=1)
  {
   cout<<"There is no argument passed....";
   return 0;
  }
  for(int x=1; x<ac; x++)
  {
    cout<<"\n your argument number"<<x<<"is = "<<av[x];
  }
  getch();
  return 1;
}