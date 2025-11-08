// 4. Write a program to input two strings and check if they are equal using strcpy() and comparison.

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str1[100], str2[100], temp[100];
    cout << "Enter first string: ";
    cin.getline(str1, 100);
    cout << "Enter second string: ";
    cin.getline(str2, 100);
    strcpy(temp, str1);
    bool equal = true;
    for (int i = 0; temp[i] != '\0' || str2[i] != '\0'; i++)
    {
        if (temp[i] != str2[i])
        {
            equal = false;
            break;
        }
    }
    if (equal)
        cout << "Equal";
    else
        cout << "Not equal";
}

/*
OUTPUT

Enter first string: sfsdf
Enter second string: sada
Not equal

*/