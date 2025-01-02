//check and display input month which type of weather it has and give the name of the month[using switch case]
#include<iostream.h>
#include<conio.h>
void main()
{
 int a;
 clrscr();
 cout<<"\n1.January \n2.February \n3.March \n4.April \n5.may \n6.June";
 cout<<"\n7.July \n8.August \n9.September \n10.Octomber \n11.November \n12.December \n13.exit";
 cout<<"Enter the month number:";
 cin>>a;
 switch(a)
  {
  case 1:
    cout<<"January";
    cout<<"\n Weather is winter";
    break;
  case 2:
    cout<<"Febuary";
    cout<<"\n Weather is winter";
    break;
  case 3:
    cout<<"March";
    cout<<"\n Weather is spring";
    break;
  case 4:
    cout<<"April";
    cout<<"\n Weather is summer";
    break;
  case 5:
    cout<<"May";
    cout<<"\n Weather is summer";
    break;
  case 6:
    cout<<"June";
    cout<<"\n Weather is summer";
    break;
  case 7:
    cout<<"July";
    cout<<"\n Weather is spainkler";
    break;
  case 8:
    cout<<"August";
    cout<<"\n Weather is monsoon";
    break;
  case 9:
    cout<<"September";
    cout<<"\n Weather is monsoon";
    break;
  case 10:
    cout<<"Octomber";
    cout<<"\n Weather is monsoon";
    break;
  case 11:
    cout<<"November";
    cout<<"\n Weather is Autumn";
    break;
  case 12:
    cout<<"December";
    cout<<"\n Weather is winter";
    break;
  case 13:
    cout<<"Exit program.....";
    break;
  default:
      cout<<"Wrong choice...";
   }
 }
