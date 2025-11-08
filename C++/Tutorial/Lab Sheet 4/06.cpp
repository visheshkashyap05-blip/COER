// 6. Write a program to assign grades based on marks (if-else ladder).

#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "Enter marks : ";
    cin >> m;
    if (m >= 90)
    {
        cout << "A";
    }
    else
    {
        if (m >= 70)
        {
            cout << "B";
        }
        else
        {
            if (m >= 60)
            {
                cout << "C";
            }
            else
            {
                if (m >= 50)
                {
                    cout << "D";
                }
                else
                {
                    if (m >= 40)
                    {
                        cout << "E";
                    }
                    else
                    {
                        cout << "FAIL";
                    }
                }
            }
        }
    }
}

/*
OUTPUT

Enter marks : 33
FAIL

*/