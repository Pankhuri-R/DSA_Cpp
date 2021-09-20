#include <bits\stdc++.h>

using namespace std;

void replace(string s, int i)
{
    if (i == s.length())
    {
        return;
    }

    if (s[i] == 'p' && s[i + 1] == 'i')
    {
        cout << "3.14";
        i = i + 2;
    }
    cout << s[i];
    replace(s, (i + 1));
}

int main()
{
    string s;
    int i = 0;
    cout << "Enter the string: ";
    cin >> s;
    replace(s, i);
    return 0;
}