// 3. Write a program to search for a number in a sequence; stop searching if found (break).

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int i, s, n;
    cout << "Enter how many no.'s your want in sequence : ";
    cin >> s;
    vector<int> ns(s);
    cout << "Enter no.'s : ";
    for (i = 1; i <= s; i++)
    {
        cin >> ns[i];
    }
    cout << "Enter no. you want to search : ";
    cin >> n;
    bool f = 0;
    for (i = 1; i < s; i++)
    {
        if (ns[i] == n)
        {
            f = 1;
            cout << "found it at index : " << i;
            break;
        }
    }
    if (f = 0)
        cout << "invalid no.";
}

/*
OUTPUT

Enter how many no.'s your want in sequence : 5
Enter no.'s : 13
14
12
33
6
Enter no. you want to search : 33
found it at index : 4

*/