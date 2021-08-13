#include<bits\stdc++.h>

using namespace std;

int main(){
    string s1="aBNeohLH";

    for (int i = 0; i < s1.size(); i++)
    {
        s1[i]+= '32';
    }

    cout<<s1<<endl;
    
    return 0;
}