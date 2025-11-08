// 19. Write a program to implement Binary Search for an array of floating-point numbers.

#include <iostream>
using namespace std;
int main()
{
    int n;
    float search;
    cout << "Enter n of elements: ";
    cin >> n;
    float arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element to search: ";
    cin >> search;
    int low = 0, high = n - 1;
    int mid;
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

Enter n of elements: 5
12.3
123.
343.34
23.24
23.23
Enter the element to search: 4.43

Not found

*/