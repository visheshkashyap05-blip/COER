// 11. Write a program to check whether a character is uppercase, lowercase, digit, or special character.

#include <iostream>
using namespace std;
int main()
{
    char c;
    cout << "Enter a ch : ";
    cin >> c;
    if (c >= 'A' && c <= 'Z')
    {
        cout << c << " is an uppercase";
    }
    else if (c >= 'a' && c <= 'z')
    {
        cout << c << " is a lowercase";
    }
    else if (c >= '0' && c <= '9')
    {
        cout << c << " is a digit";
    }
    else
    {
        cout << c << " is a special ch";
    }
}

/*
OUTPUT

Enter a ch : ^
^ is a special ch

*/