// 30. Write a program to display the sum of series: 13 + 23 + 33 + ... + N3.

#include <iostream>
using namespace std;
int main()
{
    int n, s = 0;
    cout << "Enter N : ";
    cin >> n;
    for (int i = 13; i <= n * 10 + 3; i += 10)
    {
        s = s + i;
    }
    cout << s;
}

/*
OUTPUT

Enter N : 9
477

*/