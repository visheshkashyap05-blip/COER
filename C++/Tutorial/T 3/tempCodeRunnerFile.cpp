#include <iostream>
using namespace std;
int main()
{
    int c = 11;
    for (int i = 5; i < 43; i = i + c)
    {
        cout << i;
        c--;
    }
}