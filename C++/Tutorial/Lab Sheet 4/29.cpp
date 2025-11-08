// 29. Write a program to find the sum of digits of a given number.

#include <iostream>
using namespace std;
int main()
{
    int n, d, s = 0;
    cout << "Enter no. : ";
    cin >> n;
    while (n != 0)
    {
        d = n % 10;
        s = s + d;
        n = n / 10;
    }
    cout << s;
}

/*
OUTPUT

Enter no. : 12345
15

*/