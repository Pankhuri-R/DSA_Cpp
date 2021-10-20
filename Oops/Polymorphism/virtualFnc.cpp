#include <iostream>

using namespace std;

class base
{
public:
    virtual void print()
    {
        cout << "Base class print fnc\n";
    }

    virtual void display()
    {
        cout << "Base class display fnc\n";
    }
};

class derived
{
public:
    void print()
    {
        cout << "Derived class print fnc\n";
    }

    void display()
    {
        cout << "Derived class display fnc\n";
    }
};

int main()
{
    base *baseptr;
    derived d;

    // baseptr = &d;

    d.display();
    d.print();
    return 0;
}