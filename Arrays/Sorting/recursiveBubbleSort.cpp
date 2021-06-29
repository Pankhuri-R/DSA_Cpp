#include<iostream>

using namespace std;

void swap(int *p1, int *p2){
    int temp= *p1;
    *p1= *p2;
    *p2=temp;
}

void bubbleSort(int arr[], int n){
    int i,j;
    for(int i=0;i<n-1;i++){
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j+1]<arr[j])
            {
                swap(&arr[j+1],&arr[j]);
            }
            
        }
        
    }
}

void print(int a[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements for the array ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubbleSort(arr,n);
    print(arr,n);
}