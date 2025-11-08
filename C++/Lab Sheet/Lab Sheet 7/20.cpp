// 20. Write a program to check whether two strings are anagrams using string functions.

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
    if (strlen(str1) != strlen(str2))
    {
        cout << "The strings are not anagrams";
        return 0;
    }
    int freq1[256] = {0};
    int freq2[256] = {0};
    int len = strlen(str1);
    for (int i = 0; i < len; i++)
    {
        char ch1 = tolower(str1[i]);
        char ch2 = tolower(str2[i]);
        freq1[(unsigned char)ch1]++;
        freq2[(unsigned char)ch2]++;
    }
    for (int i = 0; i < 256; i++)
    {
        if (freq1[i] != freq2[i])
        {
            cout << "The strings are not anagrams";
            return 0;
        }
    }
    cout << "The strings are anagrams";
}

/*
OUTPUT

Enter first string: qwert
Enter second string: asdf
The strings are not anagrams

*/