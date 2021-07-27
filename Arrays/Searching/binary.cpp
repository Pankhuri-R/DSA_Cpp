#include<bits/stdc++.h>

using namespace std;

int binarySearch(int arr[],int n, int key){
    int start=0;
    int end= n-1;
    while (start<=end)
    {
        int mid= (start+end)/2;
        if (arr[mid]>key)
        {
            end= mid-1;
        }
        else if (arr[mid]<key)
        {
            start=mid+1;
        }
        else {
            return mid;
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
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"Enter key: ";
    cin>>key;
    cout<<key<<" is found at index "<<binarySearch(arr,n,key);
    return 0;
}