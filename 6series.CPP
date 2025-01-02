#include<iostream.h>
#include<conio.h>

void main()
 {
    int n,i, first = 0, second = 1, next;
     clrscr();
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "Fibonacci Series: ";
    for (i = 0; i < n; ++i)
     {
	if (i <= 1)
	    next = i;
	else
	{
	    next = first + second;
	    first = second;
	    second = next;
	}
	cout << next << " ";
    }
    getch();
}
