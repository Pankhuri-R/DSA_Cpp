#include <bits\stdc++.h>

using namespace std;

int totalWays(int n)
{
    if (n == 1)
    {
        return 1;
    }
    if (n == 0)
    {
        return 0;
    }
    int count = 0;
    count += totalWays(n - 1) + totalWays(n - 2);
    return count;
}

int main()
{
    cout << totalWays(4);
    return 0;
}