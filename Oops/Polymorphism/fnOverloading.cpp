#include <iostream>

using namespace std;

class poly
{
public:
    void func()
    {
        cout << "Func with 0 args\n";
    }

    void func(int x)
    {
        cout << "Func with int argument (" << x << ")\n";
    }

    void func(double x)
    {
        cout << "Func with double argument (" << x << ")\n";
    }
};

int main()
{
    poly obj;
    obj.func();
    obj.func(4);
    obj.func(6.9);
    return 0;
}