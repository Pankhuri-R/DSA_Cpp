#include<iostream>
#include<climits>

using namespace std;

int maxElemSpecific(int arr[],int n){
    int i;
    int maxNo= INT_MIN;
    cout<<"Enter the value of i between 0 to n-1: ";
    cin>>i;
    if (i>=0 && i<=n-1)
    {
        for (int j = 0; j < i; j++)
        {
            maxNo= max(maxNo,arr[j]);
        }
        
    }    
    return maxNo;
}

int maxElemContin(int arr[],int n){
    int mx= INT_MIN;
    for (int i = 0; i < n; i++)
    {
        mx= max(mx,arr[i]);
        cout<<mx<<endl;
    }
    return mx;
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
    
    cout<<maxElemSpecific(arr,n);
    cout<<"\n Continuous maximum element in the prefix arrays:\n";
    maxElemContin(arr,n);
    return 0;
}