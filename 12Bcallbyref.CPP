#include<iostream.h>
#include<conio.h>

int main() {
    int a, b;
    clrscr();
    cout << "Enter first value:"; cin>>a;
    cout <<"Enter second value:"; cin>>b;
    cout << "Before swapping a:: " << a << ", b: " << b << endl;
    int *p1 = &a;
    int *p2 = &b;

    *p1 = *p1 + *p2;
    *p2 = *p1 - *p2;
    *p1 = *p1 - *p2;

    cout << "After swapping a:: " << a << ", b: " << b << endl;
    
    return 0;
}
