// 14. Write a program to find a substring inside another string using strstr().

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[200], sub[100];
    cout << "Enter the main string: ";
    cin.getline(str, 200);
    cout << "Enter the substring to search: ";
    cin.getline(sub, 100);
    char *ptr = strstr(str, sub);
    if (ptr != NULL)
        cout << "found at position: " << (ptr - str);
    else
        cout << "Not found";
}

/*
OUTPUT

Enter the main string: sdlfkjdslg
Enter the substring to search: fkj
found at position: 3

*/