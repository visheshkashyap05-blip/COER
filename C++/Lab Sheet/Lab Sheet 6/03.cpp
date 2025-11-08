// 3. Write a program to find the maximum and minimum element in a 1D array.

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
    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    cout << "\nMaximum element = " << max;
    cout << "\nMinimum element = " << min;
}

/*
OUTPUT

Enter the no of elements : 4
23
35
6
57

Maximum element = 57
Minimum element = 6

*/