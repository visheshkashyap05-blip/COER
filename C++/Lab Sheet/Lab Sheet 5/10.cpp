// 10. Write a program to count positive numbers entered by the user until 0 is entered (break).

#include <iostream>
using namespace std;
int main()
{
    int n, c = 0;
    while (1)
    {
        cout << "Enter no. : ";
        cin >> n;
        if (n == 0)
        {
            break;
        }
        if (n > 0)
        {
            c++;
        }
    }
    cout << "your entered " << c << " positive no.'s";
}

/*
OUTPUT

Enter no. : 1
Enter no. : 2
Enter no. : -3
Enter no. : -4
Enter no. : 0
your entered 2 positive no.'s

*/