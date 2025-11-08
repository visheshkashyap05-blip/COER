// 5. Write a program to concatenate two strings using strcat().

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str1[200], str2[100];
    cout << "Enter first string: ";
    cin.getline(str1, 200);
    cout << "Enter second string: ";
    cin.getline(str2, 100);
    strcat(str1, str2);
    cout << "Concatenated string = " << str1;
}

/*
OUTPUT

Enter first string: tgsdg
Enter second string: wertwe
Concatenated string = tgsdgwertwe

*/