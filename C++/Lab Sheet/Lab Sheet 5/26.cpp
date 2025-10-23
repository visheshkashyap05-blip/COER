// 26. Write a program to find LCM of two numbers using loops.

#include <iostream>
using namespace std;
int main()
{
    int a, b, lcm;
    cout << "Enter 2 no. : ";
    cin >> a >> b;
    for (lcm = 1; lcm <= a * b; lcm++)
    {
        if (lcm % a == 0 && lcm % b == 0)
        {
            cout << lcm;
            break;
        }
    }
}

/*
OUTPUT

Enter 2 no. : 14
76
532

*/