#include<bits\stdc++.h>

using namespace std;

int main(){
    int n,s;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements for the array ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter the sum value: ";
    cin>>s;
    int st=-1,en=-1,i=0,j=0;
    int currSum=0;
    while (j<n && currSum+arr[j]<= s)
    {
        currSum+=arr[j];
        j++;
    }

    if (currSum == s)
    {
        cout<<i+1<<" "<<j+1;
        return 0;
    }
    
    while (j<n)
    {
        currSum+=arr[j];
        while (currSum>s)
        {
            currSum-=arr[i];
            i++;
        }
        if (currSum==s)
        {
            st= i+1;
            en= j+1;
            break;
        }
        j++;
    }
    
    cout<<st<<" "<<en;
    return 0;
}