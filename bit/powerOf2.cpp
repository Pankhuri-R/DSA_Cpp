#include<iostream>

using namespace std;

// n= 1000 and n-1= 0111
// n & n-1 has same bits as n except the rightmost set bit
// bitwise and will alwys give zero if n is power of 2

bool isPowerOf2(int n){
    return (n&& !( n & n-1));
}

int main(){
    cout<<isPowerOf2(8)<<endl;
    cout<<isPowerOf2(6)<<endl;
    return 0;
}