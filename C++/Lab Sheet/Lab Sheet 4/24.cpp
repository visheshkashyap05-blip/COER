// 24. Write a program to reverse a given number. 

#include <iostream>
using namespace std;
int main()
{
    int n, r, rev = 0;
    cout << "Enter a no. : ";
    cin >> n;
    while (n != 0)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    cout << "reversed no. : " << rev;
}

/*  
OUTPUT

Enter a no. : 123
reversed no. : 321

*/