// 11. Write a program to sort an array using Bubble Sort in ascending order.

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
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "\nascending order:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

/*
OUTPUT

Enter n of elements: 6
23
4
3
5
54
3

ascending order:
3 3 4 5 23 54

*/