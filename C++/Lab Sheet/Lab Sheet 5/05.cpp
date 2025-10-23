// 5. Write a program to simulate a menu-driven calculator with default in switch.

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char o;
    cout << "Enter 1st no. : ";
    cin >> a;
    cout << "Enter operator : ";
    cin >> o;
    cout << "Enter 2nd no. : ";
    cin >> b;
    switch (o)
    {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        cout << a / b;
        break;
    default:
        cout << "invalid operator";
        break;
    }
}

/*
OUTPUT

Enter 1st no. : 12
Enter operator : *
Enter 2nd no. : 5
60

*/