// 6. Write a program to search an element in a 1D array (without using functions).

#include <iostream>
using namespace std;
int main()
{
    int n, search, found = 0;
    cout << "Enter no of elements : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter no. to search: ";
    cin >> search;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            found = 1;
            cout << "\nno. found at position " << i;
            break;
        }
    }
    if (!found)
    {
        cout << "\nno. not in array";
    }
}

/*
OUTPUT

Enter no of elements : 4
23
45
65
76
Enter no. to search: 23

no. found at position 0

*/