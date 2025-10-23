// 21. Write a program to find the sum of all even and odd digits in a given number.

#include <iostream>
using namespace std;
int main()
{
    int n, d, e = 0, o = 0;
    cout << "Enter no. : ";
    cin >> n;
    while (n != 0)
    {
        d = n % 10;
        if (d % 2 == 0)
            e += d;
        else
            o += d;
        n /= 10;
    }
    cout << "sum of even digits : " << e << "\n"
         << "sum of odd digits : " << o << endl;
}

/*
OUTPUT

Enter no. : 5644793
sum of even digits : 14
sum of odd digits : 24

*/

/*

#include <iostream>
using namespace std;
int main()
{
    int n, t, r = 0, d, o = 0, e = 0;
    cout << "Enter no. : ";
    cin >> n;
    t = n;
    while (t != 0)
    {
        d = t % 10;
        r = r * 10 + d;
        t /= 10;
    }
    t = r;
    while (t != 0)
    {
        d = t % 10;
        t /= 100;
        o += d;
    }
    t = r / 10;
    while (t != 0)
    {
        d = t % 10;
        t /= 100;
        e += d;
    }
    cout << "sum of even digits : " << e << "\n"
         << "sum of odd digits : " << o << endl;
}

OUTPUT

Enter no. : 12345678
sum of even digits : 20
sum of odd digits : 16

*/