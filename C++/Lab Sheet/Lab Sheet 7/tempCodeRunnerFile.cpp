// 18. Write a program to copy only first 5 characters of one string to another using strncpy().

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str1[100], str2[100];
    cout << "Enter a string: ";
    cin.getline(str1, 100);
    strncpy(str2, str1, 5);
    str2[5] = '\0';
    cout << str2;
}

/*
OUTPUT



*/