// 12. Write a program to perform calculator operations (+, -, *, /) using switch.

#include <iostream>
using namespace std;
int main()
{
    double a, b;
    char c;
    cout << "Enter no. : ";
    cin >> a;
    cout << "Enter operator : ";
    cin >> c;
    cout << "Enter no. : ";
    cin >> b;
    switch (c)
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
        cout << "Invalid operator";
        break;
    }
}

/*
OUTPUT

Enter no. : 12
Enter operator : *
Enter no. : 5
60

*/