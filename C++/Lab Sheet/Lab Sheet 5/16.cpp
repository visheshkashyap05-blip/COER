// 16. Write a program to check whether a number is perfect number.

#include <iostream>
using namespace std;
int main()
{
    int n, s = 0;
    cout << "Enter no. : ";
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            s += i;
        }
    }
    if (s == n)
    {
        cout << n << " is a perfect no.";
    }
    else
    {
        cout << n << " is not a perfect no.";
    }
}

/*
OUTPUT

Enter no. : 28
28 is a perfect no.

*/