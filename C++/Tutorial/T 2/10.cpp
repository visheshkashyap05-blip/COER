#include <iostream>
using namespace std;
int main()
{
    int per, m, p, c;
    cout << "Enter % and marks : ";
    cin >> per >> m >> p >> c;
    if (per >= 80)
    {
        cout << "Eligible";
    }
    else if (per >= 70 && m >= 80)
    {
        cout << "Eligible";
    }
    else if (per >= 65 && m >= 75 && p >= 75)
    {
        cout << "Eligible";
    }
    else if (per >= 60 && m >= 70 && p >= 70 && p >= 70)
    {
        cout << "Eligible";
    }
    else
    {
        cout << "Not Eligible";
    }
}