// 1. Write a program to input a string and find its length using strlen().

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);
    int length = strlen(str);
    cout << "Length = " << length << endl;
}

/*
OUTPUT

Enter a string: sdjflks
Length = 7

*/