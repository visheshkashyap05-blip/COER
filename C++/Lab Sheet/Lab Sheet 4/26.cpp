// 26. Write a program to print the Fibonacci series up to N terms.

#include <iostream>
using namespace std;
int main()
{
    int n, t1 = 0, t2 = 1, nt;
    cout << "Enter n : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << t1 << "\n";
        nt = t1 + t2;
        t1 = t2;
        t2 = nt;
    }
}

/*
OUTPUT

Enter n : 9
0
1
1
2
3
5
8
13
21

*/