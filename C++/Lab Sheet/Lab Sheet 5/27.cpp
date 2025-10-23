// 27. Write a program to find GCD of two numbers using loops.

#include <iostream>
using namespace std;
int main()
{
    int a, b, n, gcd;
    cout << "Enter 2 no. : ";
    cin >> a >> b;
    if (a > b)
    {
        n = b;
    }
    else
    {
        n = a;
    }
    for (int i = 1; i <= n; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    cout << gcd;
}

/*
OUTPUT

Enter 2 no. : 13
39
13

*/