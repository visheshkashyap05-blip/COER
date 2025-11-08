// 16. Write a program to count the number of words in a string using strlen() and spaces.

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[200];
    int count = 1;
    cout << "Enter a string: ";
    cin.getline(str, 200);
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] == ' ')
        {
            count++;
        }
    }
    cout << "words = " << count << endl;
}

/*
OUTPUT

Enter a string: asa asd saf sdf
words = 4

*/