// 10. Write a program to reverse a string using strrev().

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);
    strrev(str);
    cout << "Reversed string = " << str;
}

/*
OUTPUT

Enter a string: safsdg
Reversed string = gdsfas

*/