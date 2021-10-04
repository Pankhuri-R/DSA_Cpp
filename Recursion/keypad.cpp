#include <bits\stdc++.h>

using namespace std;

string keypad[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void keypadFn(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }

    char ch = s[0];
    string code = keypad[ch - '0'];
    string ros = s.substr(1);

    for (int i = 0; i < code.length(); i++)
    {
        keypadFn(ros, ans + code[i]);
    }
}

int main()
{
    keypadFn("23", "");
    return 0;
}