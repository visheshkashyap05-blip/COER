// 8. Write a program to check whether a given number is divisible by 5 and 11.

#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter no. : ";
    cin >> a;
    if (a % 5 == 0 && a % 11 == 0)
    {
        cout << a << " is divisible by 5 & 11";
    }
}

/*
OUTPUT

Enter no. : 55
55 is divisible by 5 & 11

*/