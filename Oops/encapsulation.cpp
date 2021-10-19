#include <iostream>

using namespace std;

class A
{
    int a;
    void printPrivate()
    {
        cout << "Private print called\n";
    }

protected:
    int b;
    void print()
    {
        cout << "print called\n";
    }

public:
    void printpublic()
    {
        cout << "Public print called\n";
    }
};

int main()
{
    A obj;
    obj.printpublic();
    // obj.print();   gives error
    // obj.printPrivate();  gives error
    return 0;
}