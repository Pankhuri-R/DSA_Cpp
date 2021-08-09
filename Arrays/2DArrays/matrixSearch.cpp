#include<bits\stdc++.h>

using namespace std;

int main(){
    int m,n,target;
    cout<<"Enter the order of the matrix:";
    cin>>m>>n;
    int mat[m][n];
    cout<<"Enter element to be found:";
    cin>>target;
    cout<<"Enter the elements:";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>mat[i][j];
        }
    }
    
    int r=0,c=n-1;
    bool found=false;
    while (r<m && c>=0)
    {
        if(mat[r][c]==target){
            found=true;
        }
        if (mat[r][c]>target)
        {
            c--;
        }
        else
        {
            r++;
        }
    }
    if (found)
    {
        cout<<"Element found";
    }
    else
    {
        cout<<"Element not found";
    }
    return 0;
}