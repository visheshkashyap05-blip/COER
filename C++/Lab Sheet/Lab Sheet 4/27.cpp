// 27. Write a program to check whether a number is prime.

#include <iostream>
using namespace std;
int main()
{
    int n;
    bool p = 1;
    cout << "Enter a no. : ";
    cin >> n;
    if (n < 2)
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
    {
        cout << n << " is a prime no." << endl;
    }
    else
    {
        cout << n << " is not a prime no." << endl;
    }
}

/*
OUTPUT

Enter a no. : 67
67 is a prime no.

*/