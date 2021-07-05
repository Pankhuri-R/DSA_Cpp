#include<iostream>

using namespace std;



int main(){
    int m,n;
    
    cout<<"Enter the height for inverted pyramid: ";
    cin>>n;
    while(n!=0){
        for (int i = n; i >0; i--)
        {
            cout<<"* ";
        }
        cout<<endl;
        n--;
    }

    cout<<endl<<endl;
    
    // FOR INVERTED PYRAMID ROTATED BY -180 DEGREES
    int h;
	cout<<"Enter the height of pyramid"<<endl;
	cin>>h;
	
	for(int i=1; i<=h; i++)
	{
        for(int j=1; j<=h; j++)
        {
        	if(j<=h-i)
        	{
        		cout<<"  ";
			}
			else cout<<" #";
		}
		cout<<endl;
	}

    return 0;
}