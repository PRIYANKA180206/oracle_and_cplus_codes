#include<iostream.h>
#include<conio.h>

void main()
{
    int n;
    clrscr();
    cout << "Enter the number of terms: ";
    cin >> n;

    int a = 6, b = 3, c = 0;
    for (int i = 0; i < n; i++) {
	cout << a << " ";
	c = b;
	b += 2;
	a += c;
    }

 getch();
}
