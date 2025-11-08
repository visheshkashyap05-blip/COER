// 28. Write a program to display all prime numbers between two given numbers.

#include <iostream>
using namespace std;
bool p(int N)
{
    if (N < 2)
    {
        return 0;
    }
    for (int i = 2; i < N; i++)
    {
        if (N % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n, nn;
    cout << "Enter 2 no. : ";
    cin >> n >> nn;
    for (int i = n; i <= nn; i++)
    {
        if (p(i))
        {
            cout << i << "\n";
        }
    }
}

/*
OUTPUT

Enter 2 no. : 3
30
3
5
7
11
13
17
19
23
29

*/