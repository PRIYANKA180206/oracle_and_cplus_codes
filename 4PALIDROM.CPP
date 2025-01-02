#include<iostream.h>
#include<conio.h>

int main()
 {
    int n, num, digit, rev = 0;
    clrscr();
    cout << "Enter a positive number: ";
    cin >> num;

    n = num;

    while (num != 0)
     {
	digit = num % 10;
	rev = (rev * 10) + digit;
	num = num / 10;
     }

    if (n == rev)
	cout << n << " is a palindrome number.";
    else
	cout << n << " is not a palindrome number.";
 return 0;
}
