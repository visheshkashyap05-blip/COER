// 15. Write a program to check whether three sides can form a valid triangle.

#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter sides : ";
    cin >> a >> b >> c;
    if ((a + b) > c && (a + c) > b && (b + c) > a)
    {
        cout << "triangle";
    }
    else
    {
        cout << "not a triangle";
    }
}

/*
OUTPUT

Enter sides : 7
8
4
triangle

*/