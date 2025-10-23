// 7. Write a program to check whether a character is a vowel or consonant.

#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
    char c;
    cout << "Enter a character : ";
    cin >> c;
    if (isalpha(c))
    {
        char lc = tolower(c);
        if (lc == 'a' || lc == 'e' || lc == 'i' || lc == 'o' || lc == 'u')
        {
            cout << c << " is vowel" << endl;
        }
        else
        {
            cout << c << " is consonant" << endl;
        }
    }
    else
    {
        cout << c << " is not an alphabet" << endl;
    }
}

/*
OUTPUT

Enter a character : e
e is vowel

*/