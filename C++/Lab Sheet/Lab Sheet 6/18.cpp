// 18. Write a program to implement Binary Search for an array of integers.

#include <iostream>
using namespace std;
int main()
{
    int n, search;
    cout << "Enter n of elements: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element to search: ";
    cin >> search;
    int low = 0, high = n - 1, mid;
    bool found = false;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == search)
        {
            cout << "\nFound at position " << mid << endl;
            found = true;
            break;
        }
        else if (search > arr[mid])
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

Enter n of elements: 3
1
2
3
Enter the element to search: 4

Not found

*/