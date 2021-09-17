#include <iostream>

using namespace std;

int divisible(int n, int a, int b)
{
    int c1 = n / a;
    int c2 = n / b;
    int c3 = n / (a * b);

    return c1 + c2 - c3;
}

int main()
{
    int n, a, b;
    cout << "Enter the upper limit n: ";
    cin >> n;
    cout << "Enter the numbers from which all others are divisible: ";
    cin >> a >> b;

    cout << divisible(n, a, b);
    return 0;
}