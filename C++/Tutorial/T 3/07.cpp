#include <iostream>
using namespace std;
int main()
{
    int n, c = 0;
    cout << "Enter n : ";
    cin >> n;
    for (int i = 1; i <= n; i = i + c)
    {
        cout << i;
        c++;
    }
}