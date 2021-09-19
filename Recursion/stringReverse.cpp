#include <iostream>
#include <string.h>

using namespace std;

string revStr(string s, int i, int n)
{
    if (i == n)
    {
        return "";
    }

    string restStr = revStr(s, i + 1, n);
    cout << s[i];
    return restStr;
}

void rev(string s)
{
    if (s.length() == 0)
    {
        return;
    }
    string rest = s.substr(1);
    rev(rest);
    cout << s[0];
}

int main()
{
    string s;
    cout << "Enter the string: ";
    cin >> s;
    int i = 0;
    int n = s.length();
    // revStr(s, i, n);
    rev(s);
    return 0;
}