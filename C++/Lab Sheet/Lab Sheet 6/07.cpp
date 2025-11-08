// 7. Write a program to input and display elements of a 2D array (matrix).

#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cout << "Enter no of rows : ";
    cin >> r;
    cout << "Enter no of columns : ";
    cin >> c;
    int arr[r][c];
    cout << "\nEnter the elements : \n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "\nmatrix is:\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

/*
OUTPUT

Enter no of rows : 5
Enter no of columns : 5

Enter the elements :
1
2
3
4
5
1
2
3
4
5
1
2
3
4
5
1
2
3
4
5
1
2
3
4
5

matrix is:
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5

*/