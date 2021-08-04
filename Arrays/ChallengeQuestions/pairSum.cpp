#include<bits\stdc++.h>

using namespace std;

bool checkSum(int arr[],int n, int k){
    int low=0;
    int high= n-1;
    while (low<high)
    {
        if(arr[low]+arr[high] == k)
        {
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if(arr[low]+arr[high] < k){
            low++;
        }
        else{
            high--;
        }
    }
    if (low == high && arr[low]+arr[high]==k)
    {
        cout<<low<<" "<<high<<endl;
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int arr[]={2,4,7,11,14,16,20,21};  //array should be sorted
    int k=31;
    cout<<checkSum(arr,8,k);
    return 0;
}