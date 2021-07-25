#include<iostream>

using namespace std;

void fib(int num){
    int t1=0,t2=1;
    int nextTerm;

    for(int i=1;i<=num;i++){
        cout<<t1<<' ';
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;
    }
    return;
}

int main(){
    int n;
    cout<<"Enter the value of n ";
    cin>>n;
    fib(n);
    return 0;
}