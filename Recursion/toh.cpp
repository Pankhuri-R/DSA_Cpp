#include <bits\stdc++.h>

using namespace std;

void towerOfHanoi(int n, char src, char helper, char dstn)
{
    if (n == 0)
    {
        return;
    }

    towerOfHanoi(n - 1, src, dstn, helper);
    cout << "Move from " << src << " to " << dstn << endl;
    towerOfHanoi(n - 1, helper, src, dstn);
}

int main()
{
    towerOfHanoi(3, 'A', 'B', 'C');
    return 0;
}