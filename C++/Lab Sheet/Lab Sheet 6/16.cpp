// 16. Write a program to count the number of occurrences of a given element in an array (Linear Search).

#include <iostream>
using namespace std;
int main()
{
    int n, search, count = 0;
    cout << "Enter n of elements: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element to count: ";
    cin >> search;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            count++;
        }
    }
    cout << count;
}

/*
OUTPUT

Enter n of elements: 10
12
1
21
2
12
3435
33
12
12
343
Enter the element to count: 12
4

*/