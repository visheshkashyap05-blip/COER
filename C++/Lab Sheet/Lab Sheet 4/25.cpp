// 25. Write a program to calculate the factorial of a number using for loop.

#include <iostream>
using namespace std;
int main()
{
    int n;
    long f = 1;
    cout << "Enter no. : ";
    cin >> n;
    if (n != 0)
    {
        for (int i = 1; i <= n; i++)
        {
            f = f * i;
        }
    }
    cout << "Factorial of " << n << " is : " << f;
}

/*
OUTPUT

Enter no. : 9
Factorial of 9 is : 362880

*/