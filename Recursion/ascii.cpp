#include <bits\stdc++.h>

using namespace std;

void ascii(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char ch = s[0];
    string ros = s.substr(1);

    ascii(ros, ans);
    ascii(ros, (ans + ch));
    ascii(ros, ans + to_string(int(ch)));
}

int main()
{
    ascii("AB", "");
    return 0;
}