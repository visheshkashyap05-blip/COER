// 13. Write a program to find and print all prime numbers between 1 and N.

#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    cout << "Enter no. : ";
    cin >> n;
    for (i = 2; i < n; i++)
    {
        bool p = 1;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                p = 0;
                break;
            }
        }
        if (p)
            cout << i << " ";
    }
}

/*
OUTPUT

Enter no. : 50
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47

*/