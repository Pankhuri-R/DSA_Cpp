#include<iostream>

using namespace std;



int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    while(n!=0){
        for (int i = n; i >0; i--)
        {
            cout<<"* ";
        }
        cout<<endl;
        n--;
    }
    
    return 0;
}