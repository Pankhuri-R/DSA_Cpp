#include<iostream>

using namespace std;

void swap(int *p1, int *p2){
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
}

int partition(int a[], int low ,int high){
    int i,j;
    int pivot= a[high];
    i=low-1;
    for (j = low; j < high; j++)
    {
        if (a[j]<pivot)
        {
            i++;
            swap(&a[j],&a[i]);
        }
        
    }
    swap(&a[i+1],&a[high]);
    return i+1;
}

void quickSort(int a[], int low, int high){
    if (low<high)
    {
        int placedItem= partition(a,low,high);

        quickSort(a,low,placedItem-1);
        quickSort(a,placedItem+1,high);
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

int main(){
    int n;
    cout << "Enter number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    quickSort(arr,0,n);
    printArray(arr,n);
    return 0;
}