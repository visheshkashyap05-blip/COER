#include <iostream>
#include <climits>
using namespace std;
void msas(int *arr, int n)
{
    int ms = INT_MIN;
    for (int s = 0; s < n; s++)
    {
        int sum = 0;
        for (int e = s; e < n; e++)
        {
            sum = sum + arr[e];
            ms = max(ms, sum);
        }
    }
    cout << ms;
}
int main()
{
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    msas(arr, n);
}