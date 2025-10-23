#include <iostream>
using namespace std;
int main()
{

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            cout << j;
        }
        for (int k = 3; k > 0; k--)
        {
            cout << k;
        }
    }
}