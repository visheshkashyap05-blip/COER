#include <iostream>
using namespace std;
void pa(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}
void bs(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    pa(arr, n);
}
int main()
{
    int arr[] = {2, 3, 1, 5, 3, 2, 3, 5};
    int n = sizeof(arr) / sizeof(int);
    bs(arr, n);
}