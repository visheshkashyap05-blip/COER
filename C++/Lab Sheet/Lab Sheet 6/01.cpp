// 1. Write a program to input and display elements of a 1D array.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the no of elements : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

/*
OUTPUT

Enter the no of elements : 5
23
23
4
3
4
23 23 4 3 4

*/