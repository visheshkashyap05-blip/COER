// 30. Write a program to check whether a given number is a palindrome.

#include <iostream>
using namespace std;
int main()
{
    int n, r = 0, d, o;
    cout << "Enter a no. : ";
    cin >> n;
    o = n;
    while (n != 0)
    {
        d = n % 10;
        r = r * 10 + d;
        n = n / 10;
    }
    if (o == r)
    {
        cout << o << " is a palindrome";
    }
}

/*
OUTPUT

Enter a no. : 123321
123321 is a palindrome

*7