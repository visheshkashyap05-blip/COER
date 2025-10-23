// 4. Write a program to display even numbers between 1 and 20, skipping multiples of 4 (continue).

#include <iostream>
using namespace std;
int main()
{
    int i;
    for (i = 2; i < 21; i += 2)
    {
        if (i % 4 == 0)
        {
            continue;
        }
        cout << i << " ";
    }
}

/*
OUTPUT

2 6 10 14 18

*/