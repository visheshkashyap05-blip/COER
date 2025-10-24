#include <iostream>
using namespace std;
int main()
{
    for (int i = 5; i > 0; i--)
    {
        int n = 5;
        for (int j = i; j > 0; j--)
        {
            cout << n;
            n--;
        }
        cout << endl;
    }
}