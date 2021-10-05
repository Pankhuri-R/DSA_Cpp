#include <bits/stdc++.h>

using namespace std;

int pathsInGame(int s, int e)
{
    int paths = 0;
    if (s == e)
    {
        return 1;
    }
    if (s > e)
    {
        return 0;
    }

    for (int i = 1; i < 6; i++)
    {
        paths += pathsInGame(s + i, e);
    }
    return paths;
}

int main()
{
    cout << pathsInGame(0, 3);
    return 0;
}