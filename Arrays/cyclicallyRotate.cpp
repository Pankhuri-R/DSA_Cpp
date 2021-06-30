#include<iostream>

using namespace std;

void rotate(int a[],int n){
    int j=a[n-1],i;
    for ( i = n-1; i >0; i--)
    {
        a[i]=a[i-1];
    }
    
    a[0]=j;
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
    cout<<"Before rotate: ";
    printArray(arr,n);
    rotate(arr,n);
    cout<<"After rotate: ";
    printArray(arr,n);
    return 0;
}