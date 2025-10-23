// 29. Write a program to display the sum of series: 12 + 22 + 32 + ... + N2.

#include <iostream>
using namespace std;
int main()
{
    int n, s = 0;
    cout << "Enter N : ";
    cin >> n;
    for (int i = 12; i <= n * 10 + 2; i += 10)
    {
        s = s + i;
    }
    cout << s;
}

/*
OUTPUT

Enter N : 9
468

*/