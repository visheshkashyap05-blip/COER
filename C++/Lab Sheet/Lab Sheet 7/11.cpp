// 11. Write a program to check if a string is palindrome using strrev().

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[100], temp[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);
    strcpy(temp, str);
    strrev(temp);
    if (strcmp(str, temp) == 0)
        cout << "It is palindrome";
    else
        cout << "It is not palindrome";
}

/*
OUTPUT

Enter a string: asdsdsddsa
It is not palindrome

*/