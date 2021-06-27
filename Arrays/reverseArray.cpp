#include<iostream>

using namespace std;

void reverseArray(int a[],int start,int end){
        while(start<end){
            int temp= a[start];
            a[start]=a[end];
            a[end]=temp;
            start++;
            end--;
        }
}

void printArray(int a[],int sizeArray){
    for(int i=0;i<sizeArray;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}

int main() {
    int arr[]={1,2,3,4,5};
    int s=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    int e=n-1;
    reverseArray(arr,s,e);
    cout<<"Reversed array: ";
    printArray(arr,n);
    return 0;
}
