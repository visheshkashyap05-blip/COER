#include <iostream>
using namespace std;
int main()
{
    int n=1,r;
    cout<<"r : ";
    cin>>r;
    for (int i = 1; i <=r; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<n;
            n++;
        }
        cout<<endl;
    }
    
}