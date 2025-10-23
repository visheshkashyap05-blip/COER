// 1. Write a program to print numbers from 1 to 10, but skip 5 using continue.

#include <iostream>
using namespace std;
int main()
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            continue;
        }
        cout << i << " ";
    }
}

/*
OUTPUT

1 2 3 4 6 7 8 9 10

*/