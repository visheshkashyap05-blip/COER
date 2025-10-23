// 10. Write a program to display month name based on month number (1-12) using switch.

#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter month no. (1-12) : ";
    cin >> a;
    switch (a)
    {
    case 1:
        cout << "January";
        break;
    case 2:
        cout << "February";
        break;
    case 3:
        cout << "March";
        break;
    case 4:
        cout << "April";
        break;
    case 5:
        cout << "May";
        break;
    case 6:
        cout << "June";
        break;
    case 7:
        cout << "July";
        break;
    case 8:
        cout << "August";
        break;
    case 9:
        cout << "September";
        break;
    case 10:
        cout << "October";
        break;
    case 11:
        cout << "November";
        break;
    case 12:
        cout << "December";
        break;
    default:
        cout << "Invalid no.";
        break;
    }
}

/*
OUTPUT

Enter month no. (1-12) : 9
September

*/