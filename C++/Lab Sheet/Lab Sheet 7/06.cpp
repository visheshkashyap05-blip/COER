// 6. Write a program to join first name and last name using strcat().

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char first[50], last[50], fullname[120];
    cout << "Enter first name: ";
    cin.getline(first, 50);
    cout << "Enter last name: ";
    cin.getline(last, 50);
    strcpy(fullname, first);
    strcat(fullname, " ");
    strcat(fullname, last);
    cout << "Full Name = " << fullname;
}

/*
OUTPUT

Enter first name: vishesh
Enter last name: kashyap
Full Name = vishesh kashyap

*/