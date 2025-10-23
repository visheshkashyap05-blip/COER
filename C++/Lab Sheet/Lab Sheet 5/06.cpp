// 6. Write a program to check if a number is prime, terminate loop early using break.

#include <iostream>
using namespace std;

int main()
{
    bool p = 1;
    int n;
    cout << "Enter n : ";
    cin >> n;
    if (n <= 1)
    {
        p = 0;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                p = 0;
                break;
            }
        }
    }
    if (p)
        cout << n << " is a prime no.";
    else
        cout << n << " is not a prime no.";
}

/*
OUTPUT

Enter n : 11
11 is a prime no.

*/