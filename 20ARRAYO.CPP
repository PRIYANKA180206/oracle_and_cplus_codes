 //object as array
#include<iostream.h>
#include<conio.h>
class stud_info
{
 public:
 int grno;
 char stnm[20],city[15],contactno[10],Gender[6];
 void inputdata()
 {
   cout<<"\n Enter GRno:"; cin>>grno;
   cout<<"\n Enter student name:"; cin>>stnm;
   cout<<"\n Enter city:"; cin>>city;
   cout<<"\n Enter contact number:"; cin>>contactno;
   cout<<"\n Enter Gender:"; cin>>Gender;
 }
 void dispdata()
 {
   cout<<"\n"<<grno<<"\t"<<stnm<<"\t"<<city<<"\t"<<contactno<<"\t"<<Gender;
 }
};
void main()
{  clrscr();
 stud_info s[10];
 for(int x=0; x<10; x++)
 {
  s[x].inputdata();
 }
 cout<<"\n Grno \t student name \t city \t contect number \t Gender";
 for(x=0; x<10; x++)
   {
     s[x].dispdata();
   }
 getch();
}
