#include<bits/stdc++.h>
#include<math.h>

using namespace std;

void dec2bin(int n){
    int i=0,r;
    int binNum[32];
    while (n>0)
    {
        r= n%2;
        binNum[i] = r;
        n =n/2;
        i++;
    }
    for(int j= i-1; j>=0;j--){
        cout<< binNum[j];
    }
}

int decimal2Bin(int n){
    int ans=0,x=1;
    while (x<=n)
    {
        x *=2;
    }
    x /= 2;

    while (x > 0)
    {
        int lastDigit= n/x;
        n -= lastDigit*x;
        x /= 2;
        ans = ans*10 + lastDigit;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the decimal number"<<endl;
    cin>>n;

    // dec2bin(n);
    cout<<decimal2Bin(n);
    return 0;
}