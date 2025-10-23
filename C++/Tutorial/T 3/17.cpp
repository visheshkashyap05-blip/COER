#include <iostream>
using namespace std;
int main()
{
    int c = 11;
    for (int i = 50; i > 9; i = i - c)
    {
        cout << i;
        c--;
    }
}