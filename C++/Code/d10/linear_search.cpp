#include <iostream>
using namespace std;
int lc(int *arr, int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 2, 3, 4, 2, 3, 4, 4, 4, 3, 4, 4, 3};
    int n = sizeof(arr) / sizeof(int);
    cout << lc(arr, n, 10);
}