// 12. Write a program to find the first occurrence of a character in a string using strchr().

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[100], ch;
    cout << "Enter a string: ";
    cin.getline(str, 100);
    cout << "Enter the ch to search: ";
    cin >> ch;
    char *ptr = strchr(str, ch);
    if (ptr != NULL)
        cout << "Found at position: " << (ptr - str);
    else
        cout << "Character not found";
}

/*
OUTPUT

Enter a string: asdfghjk
Enter the ch to search: s
Found at position: 1

*/