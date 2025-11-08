// 8. Write a program to check if two strings are equal (case-sensitive) using strcmp().

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str1[100], str2[100];
    cout << "Enter first string: ";
    cin.getline(str1, 100);
    cout << "Enter second string: ";
    cin.getline(str2, 100);
    if (strcmp(str1, str2) == 0)
    {
        cout << "Equal";
    }
    else
    {
        cout << "Not equal";
    }
}

/*
OUTPUT

Enter first string: asd
Enter second string: asD
Not equal

*/