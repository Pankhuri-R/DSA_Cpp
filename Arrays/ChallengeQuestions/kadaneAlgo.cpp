#include<bits\stdc++.h>

using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements for the array ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int curSum=0;
    int maxSum=0;

    for (int i = 0; i < n; i++)
    {
        curSum += arr[i];
        if (curSum <0)
        {
           curSum=0;
        }
        maxSum= max(maxSum,curSum);
    }
    
    cout<<maxSum;
    return 0;
}