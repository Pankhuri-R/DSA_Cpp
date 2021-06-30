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

void intersection(int a1[], int a2[],int s1, int s2){
    cout<<"INTERSECTION: ";
    for (int i = 0; i < s1; i++)
    {
        for (int j = 0; j < s2; j++)
        {
            if (a1[i]==a2[j])
            {
                cout<<a1[i]<<" ";
            }   
        }   
    } 
}

void Union(int a1[], int a2[], int s1, int s2)
{
    int i = 0, j = 0;
    cout<< "UNION: ";
    while (i < s1 && j < s2)
    {
        if (a1[i] < a2[j])
        {
            cout << a1[i] << " ";
            i++;
        }
        else if (a2[j] < a1[i])
        {
            cout << a2[j] << " ";
            j++;
        }
        else
        {
            cout << a2[j] << " ";
            i++;
            j++;
        }
    }
    while (i < s1)
        cout << a1[i++] << " ";
 
    while (j < s2)
        cout << a2[j++] << " ";
}

int main(){
    int m,n;
    cout<<"Enter number of elements in the array: ";
    cin>>m;
    int arr1[m];
    cout<<"Enter the elements "<<endl;
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    cout<<"Enter number of elements in the array: ";
    cin>>n;
    int arr2[n];
    cout<<"Enter the elements "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    
    bubbleSort(arr1,m);
    bubbleSort(arr2,n);
    intersection(arr1,arr2,m,n);
    Union(arr1,arr2,m,n);
    return 0;
}