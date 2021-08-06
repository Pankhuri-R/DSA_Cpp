#include<bits\stdc++.h>

using namespace std;

int main(){
    int n,m;
    cout<<"Enter rows and columns resp: ";
    cin>>n>>m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
    }

    int rowStr=0,colStr=0;
    int rowEn= n-1;
    int colEn= m-1;

    while (rowStr<=rowEn && colStr <= colEn)
    {
        for(int col= colStr; col<= colEn;col++){
            cout<<arr[rowStr][col]<<" ";
        }
        rowStr++;

        for(int row= rowStr; row<= rowEn; row++){
            cout<<arr[row][colEn]<<" ";
        }
        colEn--;

        for (int col = colEn; col >= colStr; col--)
        {
            cout<<arr[rowEn][col]<<" ";
        }
        rowEn--;

        for(int row= rowEn; row>= rowStr; row--){
            cout<<arr[row][colStr]<<" ";
        }
        colStr++;
    }
    
    
    return 0;
}