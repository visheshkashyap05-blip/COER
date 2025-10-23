// 20. Write a program to print reverse of a number and check if it’s palindrome.

#include <iostream>
using namespace std;
int main()
{
    int n, t, r = 0, d;
    cout << "Enter no. : ";
    cin >> n;
    t = n;
    while (t != 0)
    {
        d = t % 10;
        r = r * 10 + d;
        t /= 10;
    }
    cout << "reverse : " << r << "\n";
    if (r == n)
    {
        cout << "it is a palindrome";
    }
    else
    {
        cout << "it is not a palindrome";
    }
}

/*
OUTPUT

Enter no. : 123321
reverse : 123321
it is a palindrome

*/