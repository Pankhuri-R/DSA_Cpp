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

    int maxSum=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum=0;
            for (int k = i; k <= j; k++)
            {
                // cout<<arr[k]<<" ";
                sum += arr[k];
            }
            maxSum= max(maxSum,sum);
        }
    }
    cout<<maxSum;
    return 0;
}