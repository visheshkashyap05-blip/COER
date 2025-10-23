#include <iostream>
using namespace std;
int main()
{
    int p, m, p, c;
    cout << "Enter % and marks : ";
    cin >> p >> m >> p >> c;
    if (p >= 80)
    {
        cout << "Eligible";
    }
    else if (p >= 70 && m >= 80)
    {
        cout << "Eligible";
    }
    else if (p >= 65 && m >= 75 && p >= 75)
    {
        cout << "Eligible";
    }
    else if (p >= 60 && m >= 70 && p >= 70 && p >= 70)
    {
        cout << "Eligible";
    }
    else
    {
        cout << "Not Eligible";
    }
}