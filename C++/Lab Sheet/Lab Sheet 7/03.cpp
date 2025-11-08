// 3. Write a program to copy one string to another using strcpy().

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str1[100], str2[100];
    cout << "Enter a string: ";
    cin.getline(str1, 100);
    strcpy(str2, str1);
    cout << "Copied string = " << str2 << endl;
}

/*
OUTPUT

Enter a string: sdsfgsd
Copied string = sdsfgsd

*/