//insert an element of unsorted array in the correct position of sorted array

#include<iostream>

using namespace std;

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void insertion(int arr[],int n){
    for (int i = 1; i < n; i++)
    {
        int current=arr[i];
        int j=i-1;
        while (arr[j]>current && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
     arr[j+1]=current;   
    }
    print(arr,n);
}

int main(){
    int n;
    cout<<"Enter size of array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertion(arr,n);
    return 0;
}