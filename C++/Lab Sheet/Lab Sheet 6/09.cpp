// 9. Write a program to subtract two matrices.

#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cout << "Enter n of rows: ";
    cin >> r;
    cout << "Enter n of columns: ";
    cin >> c;
    int A[r][c], B[r][c], C[r][c];
    cout << "\nEnter elements of Matrix A:\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> A[i][j];
        }
    }
    cout << "\nEnter elements of Matrix B:\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> B[i][j];
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            C[i][j] = A[i][j] - B[i][j];
        }
    }
    cout << "\n Matrix (A - B):\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << C[i][j] << " ";
        }
    }
}

/*
OUTPUT

Enter n of rows: 2
Enter n of columns: 2

Enter elements of Matrix A:
32
32
43
12

Enter elements of Matrix B:
4
3
5
3

 Matrix (A - B):
28 29 38 9

*/