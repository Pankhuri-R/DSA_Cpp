#include <iostream>

using namespace std;

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int prevFact = fact(n - 1);
    return n * prevFact;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << fact(n);
    return 0;
}