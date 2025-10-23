// 12. Write a program to generate Fibonacci series using while loop.

#include <iostream>
using namespace std;
int main()
{
    int t1 = 0, t2 = 1, f = 0, i = 3, n;
    cout << "Enter no. : ";
    cin >> n;
    while (i <= n)
    {
        f = t1 + t2;
        t1 = t2;
        t2 = f;
        i++;
    }
    cout << f;
}

/*
OUTPUT

Enter no. : 10
34

*/