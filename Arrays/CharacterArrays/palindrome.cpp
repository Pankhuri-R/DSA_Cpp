#include<bits\stdc++.h>

using namespace std;

int main(){
    int n;
    cout<<"Enter the number of characters:";
    cin>>n;
    char arr[n+1];
    cout<<"Enter the word:";
    cin>>arr;
    bool check=1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n-1-i])
        {
           check=0;
        }
        
    }
    if (check)
    {
        cout<<"Palindrome\n";
    }
    else
    {
        cout<<"Not a palindrome\n";
    }
    return 0;
}