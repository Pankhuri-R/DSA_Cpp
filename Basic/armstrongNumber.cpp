// If the addition of cubes of the digits give the same number

#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int n;
    cout<<"Enter the number\n";
    cin>>n;
    int dup=n;
    int cubedSum=0;
    while (dup>0)
    {
        int lastDigit= dup % 10;
        cubedSum +=  pow(lastDigit,3);
        dup= dup/10;
    }

    if (cubedSum == n)
    {
        cout<<"Armstrong number";
    }
    else{
        cout<<"Not an armstrong number";
    }
    
    return 0;
}