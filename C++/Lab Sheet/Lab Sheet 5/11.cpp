// 11. Write a program to calculate factorial of a number using while loop.

#include <iostream>
using namespace std;
int main()
{
    int i = 1, n, f = 1;
    cout << "Enter no. : ";
    cin >> n;
    while (i <= n)
    {
        f = i * f;
        i++;
    }
    cout << f;
}

/*
OUTPUT

Enter no. : 9
362880

*/