// 25. Write a program to print prime factors of a given number.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter no. : ";
    cin >> n;
    while (n % 2 == 0)
    {
        cout << 2 << " ";
        n = n / 2;
    }
    for (int i = 3; i <= n; i += 2)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n = n / i;
        }
    }
    if (n > 2)
        cout << n;
}

/*
OUTPUT

Enter no. : 123
3 41

*/