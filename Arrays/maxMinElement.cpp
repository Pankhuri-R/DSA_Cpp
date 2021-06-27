#include<iostream>

using namespace std;

int findMax(int arr[], int start, int end,int size){
    int temp= arr[start];
    for (int i = 1; i < size; i++)
    {
        /* code */
        if(arr[i]>temp){
            temp=arr[i];
        }
    }
    return temp;
}

int findMin(int arr[], int start, int end,int size){
    int temp= arr[start];
    for (int i = 1; i < size; i++)
    {
        /* code */
        if(arr[i]<temp){
            temp=arr[i];
        }
    }
    return temp;
}

int main(){
    int a[]={1,5,2,3};
    int s=0;
    int n= sizeof(a)/sizeof(a[0]);
    int e=n-1;
    int max= findMax(a,s,e,n);
    int min= findMin(a,s,e,n);
    cout<<"Maximum Element: "<<max<<endl;
    cout<<"Minimum Element: "<<min<<endl;
    return 0;
}