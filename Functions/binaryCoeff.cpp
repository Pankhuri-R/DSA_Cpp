#include<iostream>

using namespace std;

int fact(int num){
    int factorial=1;
    for(int i=1;i<=num;i++){
        factorial *= i;
    }
    return factorial;
}

int binCoeff(int n, int r){
    int nfac= fact(n);
    int rfac= fact(r);
    int nMinusRFac= fact(n-r);
    int coeff= (nfac/(rfac*nMinusRFac));
    return coeff;
}

int main(){
    int n,r;
    cout<<"Enter n and r\n";
    cin>>n>>r;
    cout<<binCoeff(n,r);
    return 0;
}