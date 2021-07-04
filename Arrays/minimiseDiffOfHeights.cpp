#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

class minimiseHeight{
    public:
    int n,k,min_diff;
    int a[];
    
    void minimise(){
        sort(a, a+n);
        int small= a[0]+k;
        int large= a[n-1]-k;
        min_diff=a[n-1] - a[0]; 
        for (int i = 1; i < n ; i++)
        {
            if (a[i]>=k)
            {
                int minimum= min(a[i]-k,small);
                int maximum= max(a[i-1]+k,large);
                min_diff=min(min_diff,maximum-minimum);
            }
            else
                continue;
            
        }
        cout<<min_diff<<endl;
        
    }

    void getArray()
    {
        cout << "Enter number of elements in the array: ";
        cin >> n;
        cout << "Enter the elements " << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout<<"Enter the k value: ";
        cin>>k;
    }

};


int main(){
    minimiseHeight m1;
    m1.getArray();
    m1.minimise();
    return 0;
}