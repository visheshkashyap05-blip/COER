// 20. Write a program to print multiplication table of a given number.

#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a no. : ";
    cin >> a;
    for (int i = 1; i <= 10; i++)
    {
        cout << a * i << "\n";
    }
}

/*
OUTPUT

Enter a no. : 7
7
14
21
28
35
42
49
56
63
70

*/