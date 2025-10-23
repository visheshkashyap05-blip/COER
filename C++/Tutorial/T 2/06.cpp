#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter no. : ";
    cin >> n;
    if (n == 0)
    {
        cout << "Zero";
    }
    else if (n > 0)
    {
        cout << "Positive";
    }
    else
    {
        cout << "Negative";
    }
}