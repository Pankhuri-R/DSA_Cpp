#include<bits/stdc++.h>
#include<climits>

using namespace std;

int main(){
    int n,maxNo,minNo;
    cout<<"Enter size of array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    maxNo= INT_MIN;
    minNo= INT_MAX;

    for(int i=0;i<n;i++){
        maxNo= max(maxNo,arr[i]);
        minNo= min(minNo,arr[i]);
    }

    cout<<"Maximum "<<maxNo<<" Minimum "<<minNo;
    return 0;
}