// 14. Write a program to search an element in a 1D array using Linear Search.

#include <iostream>
using namespace std;
int main()
{
    int n, search, found = 0;
    cout << "Enter n of elements: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element to search: ";
    cin >> search;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            found = 1;
            cout << "\nFound at position " << i;
            break;
        }
    }
    if (!found)
    {
        cout << "\nNot in array.\n";
    }
}

/*
OUTPUT

Enter n of elements: 4
2
3
4
3
Enter the element to search: 4

Found at position 2

*/