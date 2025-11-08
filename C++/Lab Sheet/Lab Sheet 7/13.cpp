// 13. Write a program to find the last occurrence of a character in a string using strrchr().

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
    char *ptr = strrchr(str, ch);
    if (ptr != NULL)
        cout << "Last occurrence is at position: " << (ptr - str);
    else
        cout << "Ch not found";
}

/*
OUTPUT

Enter a string: asdfg
Enter the ch to search: g
Last occurrence is at position: 4

*/