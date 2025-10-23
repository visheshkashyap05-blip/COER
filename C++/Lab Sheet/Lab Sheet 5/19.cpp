// 19. Write a program to display all strong numbers between 1 and 500.

#include <iostream>
using namespace std;
int main()
{
    for (int n = 1; n <= 500; n++)
    {

        int r, t, s = 0;
        t = n;
        while (t != 0)
        {
            r = t % 10;
            t /= 10;
            int f = 1;
            for (int i = 1; i <= r; i++)
            {
                f *= i;
            }
            s += f;
        }
        if (s == n)
        {
            cout << n << " ";
        }
    }
}

/*
OUTPUT

1 2 145

*/