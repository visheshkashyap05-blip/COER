// 18. Write a program to check whether a number is strong number.

#include <iostream>
using namespace std;
int main()
{
    int n, r, t, s = 0;
    cout << "Enter no. : ";
    cin >> n;
    t = n;
    while (t != 0)
    {
        r = t % 10;
        t /= 10;
        int f = 1;
        for (int i = 1; i <= r; i++)
        {
            f *= i;
        }
        s += f;
    }
    if (s == n)
    {
        cout << n << " is a strong no.";
    }
    else
    {
        cout << n << " is not a strong no.";
    }
}

/*
OUTPUT

Enter no. : 145
145 is a strong no.

*/