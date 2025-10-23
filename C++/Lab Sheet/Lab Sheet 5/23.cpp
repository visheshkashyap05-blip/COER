// 23. Write a program to display all Harshad numbers between 1 and 100.

#include <iostream>
using namespace std;
int main()
{
    int n, t, d, ds;
    for (n = 1; n <= 100; n++)
    {
        ds = 0;
        t = n;
        while (t != 0)
        {
            d = t % 10;
            ds += d;
            t /= 10;
        }
        if (n % ds == 0)
        {
            cout << n << " ";
        }
    }
}

/*
OUTPUT

1 2 3 4 5 6 7 8 9 10 12 18 20 21 24 27 30 36 40 42 45 48 50 54 60 63 70 72 80 81 84 90
100

*/