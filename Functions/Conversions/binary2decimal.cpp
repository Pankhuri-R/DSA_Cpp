#include<iostream>
#include<math.h>

using namespace std;

int bin2Dec(int n){
    int equiDec=0;
    int i=0;
    while (n>0)
    {
        int lastDigit= n%10;
        equiDec += lastDigit*(pow(2,i));
        i++;
        n=n/10;
    }
    return equiDec;
}

int main(){
    int n;
    cout<<"Enter the binary number"<<endl;
    cin>>n;

    cout<<bin2Dec(n);
    return 0;
}