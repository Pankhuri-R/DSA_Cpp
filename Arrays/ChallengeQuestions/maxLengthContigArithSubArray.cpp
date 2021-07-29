#include<iostream>

using namespace std;

int maxLength(int arr[],int n){
    int curr=2;
    int pd= arr[1]-arr[0];
    int ans=2;
    int j=2;

    while (j<n)
    {
        if (pd == arr[j]-arr[j-1])
        {
            curr++;
        }
        else{
            pd= arr[j]-arr[j-1];
            curr=2;
        }
        ans = max(ans,curr);
        j++;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements for the array ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<maxLength(arr,n);
    return 0;
}