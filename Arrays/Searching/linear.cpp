#include<bits/stdc++.h>

using namespace std;

int linearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if (arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}

int main(){
    int n,key;
    cout<<"Enter size of array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter key: ";
    cin>>key;
    cout<<key<<" is found at index "<<linearSearch(arr,n,key);
    return 0;
}