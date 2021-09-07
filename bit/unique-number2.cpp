#include<iostream>

using namespace std;

int getBit(int n,int pos){
    return ((n& (1<<pos))!=0);
}

void unique(int arr[],int n){
    int xorSum=0;
    for (int i = 0; i < n; i++)
    {
        xorSum= xorSum ^ arr[i];
    }
    
    int setBit=0;
    int tempXor= xorSum;
    int pos=0;
    while (setBit !=1)
    {
        setBit= xorSum & 1;
        pos++;
        xorSum= xorSum >>1;
    }
    
    int newXor=0;
    for (int i = 0; i < n; i++)
    {
        if (getBit(arr[i],pos-1))
        {
            newXor= newXor^arr[i];
        }
        
    }
    cout<<newXor<<endl;
    cout<<(tempXor^newXor)<<endl;
}

int main(){
    int a[]={1,2,3,1,2,3,5,6};
    unique(a,8);
    return 0;
}