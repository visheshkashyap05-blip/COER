// 17. Write a program to remove all vowels from a string using string functions.

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[200], result[200];
    int j = 0;
    cout << "Enter a string: ";
    cin.getline(str, 200);
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            continue;
        }
        result[j++] = ch;
    }
    result[j] = '\0';
    cout << "String after removing vowels: " << result;
}

/*
OUTPUT

Enter a string: aeiousdf
String after removing vowels: sdf

*/