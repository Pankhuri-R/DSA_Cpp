#include<iostream>

using namespace std;

int unique(int arr[],int n){
    int xorSum=0;
    for (int i = 0; i < n; i++)
    {
        xorSum= xorSum ^ arr[i];
    }
    return xorSum;
}

int main(){
    int a[5] ={ 2,3,5,3,2};
    cout<< unique(a,5);
    return 0;
}