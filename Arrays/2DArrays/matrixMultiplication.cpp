#include<bits\stdc++.h>

using namespace std;

int main(){
   int n1,n2,n3;
    cout<<"Enter n1,n2,n3 for n1xn2 and n2xn3 matrices: ";
    cin>>n1>>n2>>n3;
    int arr1[n1][n2], arr2[n2][n3];
    cout<<"Enter elements of first matrix: ";
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin>>arr1[i][j];
        }
    } 
    cout<<"Enter elements of second matrix: ";
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cin>>arr2[i][j];
        }
    }

    int m[n1][n3];
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            m[i][j]=0;
        }
    }

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            for (int k = 0; k < n2; k++)
            {
                m[i][j]+= arr1[i][k]*arr2[k][j];   
            }   
        }
    }
    
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}