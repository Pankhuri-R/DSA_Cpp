#include <iostream>

using namespace std;

int power(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }
    int prevProduct = power(n, p - 1);
    return n * prevProduct;
}

int main()
{
    int n, p;
    cout << "Enter number and the power resp: ";
    cin >> n >> p;
    cout << power(n, p);
    return 0;
}