// 13. Write a program to sort names of students using Bubble Sort.

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cout << "Enter no of students: ";
    cin >> n;
    string names[n];
    for (int i = 0; i < n; i++)
    {
        cin >> names[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (names[j] > names[j + 1])
            {
                string temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }
    cout << "\nNames in order:\n";
    for (int i = 0; i < n; i++)
    {
        cout << names[i] << endl;
    }
}

/*
OUTPUT

Enter no of students: 5
dev
vishesh
hardik
vansh
jaynendra

Names in order:
dev
hardik
jaynendra
vansh
vishesh

*/