// 21. Write a program to print the sum of first N natural numbers.

#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter n : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "Sum of natural no. till " << n << " is : " << sum;
}

/*
OUTPUT

Enter n : 9
Sum of natural no. till 9 is : 45

*/