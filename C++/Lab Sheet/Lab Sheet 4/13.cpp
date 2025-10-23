// 13. Write a program to find the absolute value of a number.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter no. : ";
    cin >> n;
    if (n < 0)
    {
        n = n * (-1);
    }
    cout << "Absolute value : " << n;
}

/*
OUTPUT

Enter no. : -6
Absolute value : 6

*/