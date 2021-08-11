#include<bits\stdc++.h>

using namespace std;

int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cout<<"Enter the sentence:";
    cin.getline(arr,n);
    cin.ignore();

    int i=0;
    int currLen=0,maxLen=INT_MIN;
    int st=0,maxst=0;

    while (1)
    {
        if(arr[i]==' ' || arr[i]=='\0'){
            if(currLen > maxLen){
                maxLen= currLen;
                maxst=st;
            }
            currLen=0;
            st=i+1;
        }
        else
        {
            currLen++;
        }
        
        if (arr[i]=='\0')
        {
            break;
        }
        i++;
    }
    cout<<maxLen<<endl;
    cout<<"The maximum length word is:";
    for (int i = 0; i < maxLen; i++)
    {
        cout<<arr[i+maxst];
    }
    
    return 0;
}