#include<iostream>
#include<climits>

using namespace std;

int recordBreakingDays(int arr[],int n){
    int mx=INT_MIN;
    int ans=0;
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>mx && arr[i]>arr[i+1])
        {
            ans++;
        }
        mx= max(mx,arr[i]);
    }
    return ans;   
}

int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n+1];
    arr[n]= -1;
    cout<<"Enter elements for the array ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    if (n==1)
    {
        cout<<"1";
        return 0;
    }
    

    cout<<recordBreakingDays(arr,n);
    return 0;
}