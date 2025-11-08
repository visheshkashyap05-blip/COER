// 7. Write a program to compare two strings using strcmp().

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
    int result = strcmp(str1, str2);
    if (result == 0)
        cout << "Equal";
    else
        cout << "Not equal";
}

/*
OUTPUT

Enter first string: sdfs
Enter second string: dfsd
Not equal

*/