// 14. Write a program to check whether a given number is Armstrong or not.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, t, r, d = 0;
    double s = 0.0;
    cout << "Enter no. : ";
    cin >> n;
    t = n;
    while (t != 0)
    {
        t /= 10;
        d++;
    }
    t = n;
    while (t != 0)
    {
        r = t % 10;
        s += pow(r, d);
        t /= 10;
    }
    if ((int)s == n)
    {
        cout << n << "  is an armstrong no.";
    }
    else
    {
        cout << n << " is not an armstrong no.";
    }
}

/*
OUTPUT

Enter no. : 370
370  is an armstrong no.

*/