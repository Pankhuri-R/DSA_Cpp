#include<bits/stdc++.h>
#include<math.h>

using namespace std;

int dec2oct(int n){
    int ans=0,x=1;
    while (x<=n)
    {
        x *= 8;
    }
    x /= 8;

    while (x > 0)
    {
        int lastDigit = n/x;
        n -= lastDigit*x;
        x /= 8;
        ans = ans*10 + lastDigit;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the decimal number"<<endl;
    cin>>n;

    cout<<dec2oct(n);
    return 0;
}