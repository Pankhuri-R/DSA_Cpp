#include<iostream>

using namespace std;

int main(){
    int h;
    cout<<"Enter height of the pyramid: ";
    cin>>h;
    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}