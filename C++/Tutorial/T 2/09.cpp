#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, r, l, h;
    cout << "Enter a n : ";
    cin >> n;
    r = n % 7;
    if (r == 0)
    {
        cout << n << " is divisible by 7";
    }
    else
    {
        l = n - r;
        h = l + 7;
        if (abs(n - l) < abs(n - h))
            cout << l;
        else
            cout << h;
    }
}
