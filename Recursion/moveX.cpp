#include <bits/stdc++.h>

using namespace std;

string moveX(string s)
{
    if (s.length() == 0)
    {
        return "";
    }
    char ch = s[0];
    string ans = moveX(s.substr(1));

    if (ch == 'x')
    {
        return (ans + ch);
    }
    return (ch + ans);
}

int main()
{
    string s;
    cout << "Enter the string: ";
    cin >> s;
    cout << moveX(s);
    return 0;
}