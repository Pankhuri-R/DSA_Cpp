#include<bits/stdc++.h>
#include<math.h>

using namespace std;

string dec2hex(int n){
    int x=1;
    string ans = "";

    while (x <= n)
    {
        x *= 16;
    }
    x /= 16;

    while (x > 0)
    {
        int lastDigit= n/x;
        n -= lastDigit*16;
        x /= 16;

        if (lastDigit <= 9)
        {
            ans = ans + to_string(lastDigit);
        }
        else{
            char c = 'A' + lastDigit - 10;
            ans.push_back(c);
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the decimal number"<<endl;
    cin>>n;

    cout<<dec2hex(n);
    return 0;
}