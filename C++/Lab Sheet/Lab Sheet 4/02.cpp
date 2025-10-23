// 2. Write a program to check whether a number is even or odd.

#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter no. : ";
    cin >> a;
    if (a % 2 == 0)
    {
        cout << "Even";
    }
    else
    {
        cout << "Odd";
    }
}

/*
OUTPUT

Enter no. : 4
Even

*/