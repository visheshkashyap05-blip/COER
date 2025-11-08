// 4. Write a program to reverse a 1D array.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
    cout << "\nReversed array:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

/*
OUTPUT

Enter the number of elements: 4
23
12
35
65

Reversed array:
65 35 12 23

*/