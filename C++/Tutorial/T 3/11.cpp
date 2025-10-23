#include <iostream>
using namespace std;
int main()
{
    int c = 0;
    for (int i = 5; i < 62; i = i + c)
    {
        cout << i;
        c+=2;
    }
}