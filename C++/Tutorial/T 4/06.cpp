#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i < 6; i++)
    {
        int n = 2;
        for (int j = 1; j <= i; j++)
        {
            cout << n;
            n += 2;
        }
        cout << endl;
    }
}