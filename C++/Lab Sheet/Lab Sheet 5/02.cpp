// 2. Write a program to print numbers from 1 to 10, but stop at 7 using break.

#include <iostream>
using namespace std;
int main()
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        if (i == 7)
        {
            break;
        }
        cout << i << " ";
    }
}

/*
OUTPUT

1 2 3 4 5 6

*/