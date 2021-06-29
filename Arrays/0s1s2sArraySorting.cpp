#include<iostream>

using namespace std;

void printArray(int a[],int n){
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void sort(int a[],int n){
    int count_zero=0;
    int count_one=0;
    int count_two=0;
    for(int i=0 ;i<n;i++){
        if(a[i]==0){
            count_zero++;
        }else if (a[i]==1)
        {
            count_one++;
        }else{
            count_two++;
        }    
    }
    cout<<count_zero<<" "<<count_one<<" "<<count_two<<endl;
    int j;
    for (j = 0; j < count_zero; j++)
    {
        a[j]=0;
    }
    for (j = count_zero; j < count_one+count_zero; j++)
    {
        a[j]=1;
    }
    for (j = count_one+1; j < count_two+count_one; j++)
    {
        a[j]=2;
    }
    
}


int main(){
    int arr[]={2,1,0,1,2};
    int n= sizeof(arr)/sizeof(arr[0]);
    sort(arr,n);
    printArray(arr,n);
}