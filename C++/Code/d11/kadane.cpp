#include <iostream>
#include <climits>
using namespace std;
void msas(int *arr, int n)
{
    int ms = INT_MIN;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        ms = max(ms, sum);
        if (sum < 0)
        {
            sum = 0;
        }
    }
    cout << sum;
}
int main()
{
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    msas(arr, n);
}

/*
// Kadane's Algorithm with index tracking
#include <iostream>
#include <climits>  // for INT_MIN
using namespace std;

int main() {
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int cs = 0;           // current sum
    int ms = INT_MIN;     // maximum sum so far

    int start = 0;        // start index of current subarray
    int ansStart = 0;     // start index of best subarray
    int ansEnd = 0;       // end index of best subarray

    for (int i = 0; i < n; i++) {
        cs += arr[i];     // add current element to current sum

        // if current sum is better than max sum, update answer
        if (cs > ms) {
            ms = cs;
            ansStart = start;
            ansEnd = i;
        }

        // if current sum becomes negative, reset and start new subarray
        if (cs < 0) {
            cs = 0;
            start = i + 1;
        }
    }

    cout << "Maximum subarray sum = " << ms << endl;
    cout << "Subarray indices = " << ansStart << " to " << ansEnd << endl;

    cout << "Subarray elements: ";
    for (int i = ansStart; i <= ansEnd; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
*/