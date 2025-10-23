// 28. Write a program to display the sum of series: 1 + 2 + 3 + ... + N.

#include <iostream>
using namespace std;
int main()
{
    int n, s = 0;
    cout << "Enter N : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        s = s + i;
    }
    cout << s;
}

/*
OUTPUT

Enter N : 10
55

*/