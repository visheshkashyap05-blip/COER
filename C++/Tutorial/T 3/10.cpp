#include <iostream>
using namespace std;
int main()
{
    int t1 = 0, t2 = 1, t3 = 2, nt;
    for (int i = 1; i < 10; i++)
    {
        cout << t1;
        nt = t1 + t2 + t3;
        t1 = t2;
        t2 = t3;
        t3 = nt;
    }
}