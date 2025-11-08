// 3. Write a program to find the largest of two numbers using if statement.

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter 2 no. : ";
    cin >> a >> b;
    if (a > b)
    {
        cout << "a is largest";
    }
    else
    {
        cout << "b is largest";
    }
}

/*
OUTPUT

Enter 2 no. : 12
9
a is largest

*/