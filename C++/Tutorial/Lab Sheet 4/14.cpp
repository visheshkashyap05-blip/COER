// 14. Write a program to determine eligibility to vote based on age.

#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter age : ";
    cin >> a;
    if (a >= 18)
    {
        cout << "you are eligible to vote";
    }
    else
    {
        cout << "you are a kidd";
    }
}

/*
OUTPUT

Enter age : 17
you are a kidd

*/