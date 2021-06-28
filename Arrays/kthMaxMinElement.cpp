#include<iostream>

using namespace std;

void swap(int *p1, int *p2){
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
}

void sort(int a[], int size){
    int i,j;
    for(i=0;i<size-1;i++){
        for(j=i+1;j<size;j++){
            if(a[j]<a[i])
                swap(&a[j],&a[i]);
        }
    }
}

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void kthMin(int a[],int k){
    cout<<a[k-1]<<endl;
}

void kthMax(int a[],int n, int k){
    cout<<a[n-k]<<endl;
}

int main(){
    int n,k,m;
    cout<<"Enter number of elements in the array with 100: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    sort(arr,n);
    cout<<"Enter which minimum element is to be found: ";
    cin>>k;
    if(k<n){
        kthMin(arr,k);
    }else{
        cout<<"Enter k within the range of array!!"<<endl;
    }
    cout<<"Enter which maximum element to be found: ";
    cin>>m;
    if(m<n){
        kthMax(arr,n,m);
    }else{
        cout<<"Enter correct value of m"<<endl;
    }
    
    //printArray(arr,n);
    return 0;
}