#include <iostream>

using namespace std;

class Complex
{
    int real, imag;

public:
    //constructor

    Complex() {}

    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }

    Complex operator+(Complex const &obj)
    {

        Complex res;
        res.imag = imag + obj.imag;
        res.real = real + obj.real;
        return res;
    }

    void display()
    {
        cout << real << " +j" << imag << endl;
    }
};

int main()
{
    Complex c1(8, 6), c2(1, 3);
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
}