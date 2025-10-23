#include <iostream>
using namespace std;
int main()
{
    float n1, n2;
    char op;
    cout << "Enter first n : ";
    cin >> n1;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second n: ";
    cin >> n2;
    if (op == '+')
    {
        cout << n1 + n2;
    }
    else if (op == '-')
    {
        cout << n1 - n2;
    }
    else if (op == '*')
    {
        cout << n1 * n2;
    }
    else if (op == '/')
    {
        if (n2 == 0)
        {
            cout << "Error";
        }
        else
        {
            cout << n1 / n2;
        }
    }
    else
    {
        cout << "Invalid operator";
    }
}
