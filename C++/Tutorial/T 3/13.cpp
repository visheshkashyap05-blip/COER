#include <iostream>
using namespace std;
int main()
{
    int n, c = 2;
    cout << "Enter n : ";
    cin >> n;
    for (int i = 2; i <= n; i = i + c)
    {
        cout << i;
        c += 2;
    }
}