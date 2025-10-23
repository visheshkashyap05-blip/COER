// 7. Write a program to read numbers until -1 is entered, skip negative numbers using continue.

#include <iostream>
using namespace std;
int main()
{
    int n;
    while (1)
    {
        cout << "enter no. (-1 to stop) : ";
        cin >> n;
        if (n == -1)
        {
            break;
        }
        if (n <= 0)
        {
            continue;
        }
        cout << "you entered : " << n << endl;
    }
    cout << "stop.";
}

/*
OUTPUT

enter no. (-1 to stop) : 1
you entered : 1
enter no. (-1 to stop) : 2
you entered : 2
enter no. (-1 to stop) : 0
enter no. (-1 to stop) : -9
enter no. (-1 to stop) : -1
stop.

*/