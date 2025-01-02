//Nesting class
#include<iostream.h>
#include<conio.h>
class outer
{
  class inner
    {
       public:
       void display()
	{
	  cout<<"\n Good morning from inner class method";
	}
    };
    public:
    void outdisplay()
     {
	cout<<"\n Good morning from outer class method";

     }
};
void main()
{
 clrscr();
 outer s1;
 s1.outdisplay();
 outer::inner i1;
 i1.display();
 getch();
}