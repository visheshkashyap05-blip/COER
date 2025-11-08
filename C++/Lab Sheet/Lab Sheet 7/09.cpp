// 9. Write a program to arrange an array of strings in alphabetical order using strcmp().

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int n;
    cout << "Enter no. of strings: ";
    cin >> n;
    cin.ignore();
    char arr[100][100];
    cout << "Enter " << n << " strings:\n";
    for (int i = 0; i < n; i++)
    {
        cin.getline(arr[i], 100);
    }
    char temp[100];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (strcmp(arr[j], arr[j + 1]) > 0)
            {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
    cout << "\nStrings in alphabetical order:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

/*
OUTPUT

Enter no. of strings: 4
Enter 4 strings:
sdfs
sdf
sd
fwer

Strings in alphabetical order:
fwer
sd
sdf
sdfs

*/