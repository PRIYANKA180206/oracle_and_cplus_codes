//write a program to display and set 5 student name with its age create student info class and set the array for all variable
#include<iostream.h>
#include<conio.h>
class stud_info
{
  int age[5];
  char stnm[5][10];
  public:
   void inputdata()
     {
       for(int x=0; x<5; x++)
	 {
	    cout<<"Enter student name:";
	     cin>>stnm[x];
	    cout<<"Enter student age:";
	      cin>>age[x];
	 }
     }
       void dispdata()
       {
	  for(int x=0; x<5; x++)
	  {
	    cout<<"\n student Name is: "<<stnm[x]<<" and its age is"<<age[x];
	  }
      }
};
void main()
{
 stud_info s1;
 s1.inputdata();
 s1.dispdata();
 getch();
}