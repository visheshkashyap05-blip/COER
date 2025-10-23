#include <iostream>
using namespace std;
int main()
{
    int c = 11;
    for (int i = 5; i < 46; i = i + c)
    {
        cout << i;
        c--;
    }
}