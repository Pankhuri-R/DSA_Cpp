#include<iostream>

using namespace std;

void swap(int *p1, int *p2){
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
}

void partition(int a[], int low ,int high){
    int i,j;
    i=low-1;
    for (j = low; j < high; j++)
    {
        if (a[j]<0)
        {
            i++;
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

int main()
{
    int n;
    cout << "Enter number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    partition(arr,0,n);
    printArray(arr,n);
    return 0;
}