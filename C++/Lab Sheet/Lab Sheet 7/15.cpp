// 15. Write a program to check if one string is present in another using strstr().

#include <iostream>
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[200], sub[100];
    cout << "Enter the main string: ";
    cin.getline(str, 200);
    cout << "Enter the string to check: ";
    cin.getline(sub, 100);
    char *ptr = strstr(str, sub);
    if (ptr != NULL)
        cout << "Present";
    else
        cout << "Not present";
}

/*
OUTPUT

Enter the main string: asdfghjkl
Enter the string to check: fgh
Present

*/