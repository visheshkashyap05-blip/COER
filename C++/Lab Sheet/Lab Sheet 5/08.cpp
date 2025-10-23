// 8. Write a program to print multiplication table for a given number, but stop when the product exceeds 50.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter no. : ";
    cin >> n;
    for (int i = n; i <= 50; i = i + n)
    {
        cout << i << " ";
    }
}

/*
OUTPUT

Enter no. : 5
5 10 15 20 25 30 35 40 45 50

*/