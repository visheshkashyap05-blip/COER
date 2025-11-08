// 23. Write a program to print the sum of odd numbers between 1 and N.

#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter n : ";
    cin >> n;
    for (int i = 1; i <= n; i = i + 2)
    {
        sum = sum + i;
    }
    cout << "Sum of odd no. btw 1 and " << n << " : " << sum;
}

/*
OUTPUT

Enter n : 9
Sum of odd no. btw 1 and 9 : 25

*/