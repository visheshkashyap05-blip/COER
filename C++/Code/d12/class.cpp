#include <iostream>
#include <string>
using namespace std;
class Animal
{
public:
    string color;
    void eat()
    {
        cout << "eat" << endl;
    }
    void breath()
    {
        cout << "breath" << endl;
    }
};
class Fish : private Animal
{
public:
    int fins;
    void swim()
    {
        eat();
        breath();
        cout << "swim" << endl;
    }
};
int main()
{
    Animal a1;
    a1.eat();
    a1.breath();
    Fish f1;
    f1.fins = 4;
    cout << f1.fins << endl;
    f1.swim();
}