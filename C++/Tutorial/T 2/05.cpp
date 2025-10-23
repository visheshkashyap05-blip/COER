#include <iostream>
using namespace std;
int main(){
    int y;
    cout<<"Enter year : ";
    cin>>y;
    if (y%400==0)
    {
        cout<<"it is a leap year";
    }
    else
    {
        cout<<"it is not a leap year";
    }
}