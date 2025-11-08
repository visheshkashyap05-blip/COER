// 15. Write a program to search an element in a 1D array using Binary Search.

#include <iostream>
using namespace std;
int main()
{
    int n, key;
    cout << "Enter n of elements: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the no. to search: ";
    cin >> key;
    int low = 0, high = n - 1;
    int mid;
    bool found = false;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            cout << "\nFound at position " << mid << endl;
            found = true;
            break;
        }
        else if (key > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (!found)
    {
        cout << "\nNot found";
    }
}

/*
OUTPUT

Enter n of elements: 4
23
12
53
45
Enter the no. to search: 5

Not found

*/