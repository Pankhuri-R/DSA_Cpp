#include<bits\stdc++.h>

using namespace std;

int kadane(int arr[],int n){
    int curSum=0;
    int maxSum=INT_MIN;

    for (int i = 0; i < n; i++)
    {
        curSum += arr[i];
        if (curSum <0)
        {
           curSum=0;
        }
        maxSum= max(maxSum,curSum);
    }
    return maxSum;
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

    int wrapSum=0,nonWrapSum=0,totalSum=0;

    nonWrapSum = kadane(arr,n);

    for (int i = 0; i < n; i++)
    {
        totalSum+=arr[i];
        arr[i]= -arr[i];
    }

    wrapSum= totalSum + kadane(arr,n);

    cout<<max(wrapSum,nonWrapSum);
    
    return 0;
}