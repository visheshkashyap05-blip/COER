#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    if (n > 10)
    {
        n += 5;
        cout << n;
    }
    else
    {
        n -= 3;
        cout << n;
    }
}