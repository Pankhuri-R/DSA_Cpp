#include<bits\stdc++.h>

using namespace std;

int main(){
    string s1="aBNeohLH";

    for (int i = 0; i < s1.size(); i++)
    {
        if(s1[i]>='a' && s1[i]<='z'){
            s1[i]-= 32;
        }
    }

    cout<<"Uppercase:"<<s1<<endl;

    for (int i = 0; i < s1.size(); i++)
    {
        if(s1[i]>='A' && s1[i]<='Z'){
            s1[i]+= 32;
        }
    }

    cout<<"Lowercase:"<<s1<<endl;
    
    //using transform
    transform(s1.begin(),s1.end(),s1.begin(),::toupper);
    cout<<endl<<s1;

    return 0;
}