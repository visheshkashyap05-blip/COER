// 1. Write a program to check whether a number is positive or negative.

#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter no. : ";
    cin >> a;
    if (a > 0)
    {
        cout << "Positive";
    }
    else
    {
        cout << "Negative";
    }
}

/*
OUTPUT

Enter no. : -4
Negative

*/