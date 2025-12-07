#include <iostream>
#include <climits>
using namespace std;
void msas(int *arr, int n)
{
    int ms = INT_MIN;
    for (int s = 0; s < n; s++)
    {
        for (int e = s; e < n; e++)
        {
            int sum = 0;
            for (int i = s; i <= e; i++)
            {
                sum = sum + arr[i];
            }
            cout << sum << ",";
            ms = max(ms, sum);
        }
        cout << endl;
    }
    cout << ms;
}
int main()
{
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    msas(arr, n);
}