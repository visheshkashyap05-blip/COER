// 17. Write a program to display all perfect numbers between 1 and 1000.

#include <iostream>
using namespace std;
int main()
{
    for (int n = 1; n <= 1000; n++)
    {
        int s = 0;
        for (int i = 1; i < n; i++)
        {
            if (n % i == 0)
            {
                s += i;
            }
        }
        if (s == n)
        {
            cout << n << " ";
        }
    }
}

/*
OUTPUT

6 28 496

*/