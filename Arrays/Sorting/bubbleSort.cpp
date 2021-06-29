// ALGORITHM: Bubble sort compares two adjacent numbers and swaps when the the previous one is larger than the next one.
//            This goes on till the array is sorted and the bubble sort does the process with every element.


// First Pass: 
// ( 5 1 4 2 8 ) –> ( 1 5 4 2 8 ), Here, algorithm compares the first two elements, and swaps since 5 > 1. 
// ( 1 5 4 2 8 ) –>  ( 1 4 5 2 8 ), Swap since 5 > 4 
// ( 1 4 5 2 8 ) –>  ( 1 4 2 5 8 ), Swap since 5 > 2 
// ( 1 4 2 5 8 ) –> ( 1 4 2 5 8 ), Now, since these elements are already in order (8 > 5), algorithm does not swap them.
// Second Pass: 
// ( 1 4 2 5 8 ) –> ( 1 4 2 5 8 ) 
// ( 1 4 2 5 8 ) –> ( 1 2 4 5 8 ), Swap since 4 > 2 
// ( 1 2 4 5 8 ) –> ( 1 2 4 5 8 ) 
// ( 1 2 4 5 8 ) –>  ( 1 2 4 5 8 ) 
// Now, the array is already sorted, but our algorithm does not know if it is completed.
// The algorithm needs one whole pass without any swap to know it is sorted.
// Third Pass: 
// ( 1 2 4 5 8 ) –> ( 1 2 4 5 8 ) 
// ( 1 2 4 5 8 ) –> ( 1 2 4 5 8 ) 
// ( 1 2 4 5 8 ) –> ( 1 2 4 5 8 ) 
// ( 1 2 4 5 8 ) –> ( 1 2 4 5 8 ) 

#include<iostream>

using namespace std;

void swap(int *p1, int *p2){
    int temp= *p1;
    *p1= *p2;
    *p2=temp;
}

void bubbleSort(int a[], int n){
    int count=1;
    while (count < n)
    {
        for (int i = 0; i < n - count; i++)
        {
            if (a[i] > a[i + 1])
            {
                swap(&a[i], &a[i + 1]);
            }
        }
        count++;
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
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements for the array ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubbleSort(arr,n);
    print(arr,n);
    return 0;
}