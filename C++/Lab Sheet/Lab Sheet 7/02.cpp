// 2. Write a program to count the number of vowels in a string using strlen().

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[100];
    int count = 0;
    cout << "Enter a string: ";
    cin.getline(str, 100);
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            count++;
        }
    }
    cout << "No. of vowels = " << count;
}

/*
OUTPUT

Enter a string: alfjksd
No. of vowels = 1

*/