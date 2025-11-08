// 20. Write a program to search the largest element in a sorted array using Binary Search.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n of elements: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int low = 0, high = n - 1, mid;
    while (low < high)
    {
        mid = (low + high) / 2;
        low = mid + 1;
    }
    cout << "\nLargest = " << arr[low];
}

/*
OUTPUT

Enter n of elements: 4
2
3
2
4

Largest = 4

*/