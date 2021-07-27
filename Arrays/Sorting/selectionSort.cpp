//find the minimum element in the array and swap with the first element of the unsorted array

#include<iostream>
#include<climits>

using namespace std;

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void selection(int arr[],int n){
    int minNo=INT_MAX;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if (arr[j]<arr[i])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            
        }
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
    selection(arr,n);
    return 0;
}