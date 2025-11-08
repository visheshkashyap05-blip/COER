// 5. Write a program to input 10 numbers in an array and count how many are even and odd.

#include <iostream>
using namespace std;
int main()
{
    int arr[10];
    int e = 0, o = 0;
    cout << "Enter 10 numbers : \n";
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
            e++;
        else
            o++;
    }
    cout << "\nTotal even numbers = " << e;
    cout << "\nTotal odd numbers = " << o;
}

/*
OUTPUT

Enter 10 numbers :
12
32
54
65
45
34
66
56
34
76

Total even numbers = 8
Total odd numbers = 2

*/