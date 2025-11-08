// 17. Write a program to check if a given number is present in the array or not(Linear Search).

#include <iostream>
using namespace std;
int main()
{
    int n, search;
    bool found = false;
    cout << "Enter n of elements: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the no. to search: ";
    cin >> search;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            found = true;
            break;
        }
    }
    if (found)
        cout << "\nPresent";
    else
        cout << "\nNot present";
}

/*
OUTPUT

Enter n of elements: 7
12
232
44
23
24
2323
12
Enter the no. to search: 1

Not present

*/