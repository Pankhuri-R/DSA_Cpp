#include<iostream>
#include<math.h>

using namespace std;

int octal2Dec(int n){
    int equiDec=0;
    int i=0;
    while (n>0)
    {
        int lastDigit= n%10;
        equiDec += lastDigit*(pow(8,i));
        i++;
        n=n/10;
    }
    return equiDec;
}

int main(){
    int n;
    cout<<"Enter the octal number"<<endl;
    cin>>n;

    cout<<octal2Dec(n);
    return 0;
}