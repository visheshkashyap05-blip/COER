// 15. Write a program to display Armstrong numbers between 1 and 500.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    for (int i = 1; i <= 500; i++)
    {
        int n = i, d = 0, t, r;
        double s = 0.0;
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
            cout << i << " ";
        }
    }
}

/*
OUTPUT

1 2 3 4 5 6 7 8 9 153 370 371 407

*/