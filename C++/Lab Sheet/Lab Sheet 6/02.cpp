// 2. Write a program to find the sum of all elements in a 1D array.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the no of elements : ";
    cin >> n;
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "\nSum = " << sum;
}

/*
OUTPUT

Enter the no of elements : 5
34
23
45
34
34

Sum = 170

*/