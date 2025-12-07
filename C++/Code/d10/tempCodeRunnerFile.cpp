#include <iostream>
using namespace std;
int main()
{
    char ch = 'a';
    char *ptr = &ch;
    cout << (void *)ptr << endl;
    ptr++;
    cout << (void *)ptr << endl;
}