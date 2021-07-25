#include<iostream>

using namespace std;

int sum(int num){
    int totalSum=0;
    for(int i=1;i<=num;i++){
        totalSum+=i;
    }
    return totalSum;
}

int main(){
    int n;
    cout<<"Enter the value of n\n";
    cin>>n;
    cout<<"Sum of first "<<n<<" numbers is "<<sum(n);
    return 0;
}