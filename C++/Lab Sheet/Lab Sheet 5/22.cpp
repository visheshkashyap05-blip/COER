// 22. Write a program to check whether a given number is Harshad number.

#include <iostream>
using namespace std;
int main()
{
    int n, t, d, ds = 0;
    cout << "Enter no. : ";
    cin >> n;
    t = n;
    while (t != 0)
    {
        d = t % 10;
        ds += d;
        t /= 10;
    }
    if (n % ds == 0)
        cout << n << " is a harshad no.";
    else
        cout << n << " is not a harshad no.";
}

/*
OUTPUT

Enter no. : 18
18 is a harshad no.

*/