// 5. Write a program to check whether a year is a leap year.

#include <iostream>
using namespace std;
int main()
{
    int y;
    cout << "Enter year : ";
    cin >> y;
    if ((y % 4 == 0) && (y % 100 != 0))
    {
        cout << y << " is a leap year";
    }
    else
    {
        cout << y << " is not a leap year";
    }
}

/*
OUTPUT

Enter year : 2025
2025 is not a leap year

*/