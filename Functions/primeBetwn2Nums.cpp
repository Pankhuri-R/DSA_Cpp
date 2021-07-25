#include<iostream>
#include<cmath>

using namespace std;

bool isPrime(int n){
    bool flag=0;

    for(int i=2;i<=sqrt(n);i++){
        if (n%i == 0)
        {
            flag=1;
            break;
        }
    }
    if (flag==0)
    {
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int a,b;
    cout<<"Enter two numbers\n";
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if (isPrime(i))
        {
            cout<<i<<endl;
        }
        
    }
    return 0;
}