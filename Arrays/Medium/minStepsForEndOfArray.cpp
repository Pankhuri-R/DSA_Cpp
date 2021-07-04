#include<iostream>
#include<algorithm>

using namespace std;

class minJump{
    public:
    int n,jump=1;
    int a[];
    
    int countSteps(){
        int maxReach= a[0];
        int step= a[0];
        if (n==1)
        {
            return 0;
        }
        else if (a[0]==0)
        {
            return -1;
        }
        else{
            for (int i = 1; i < n; i++)
            {
                if (i== n-1)
                {
                    return jump;
                }
                maxReach= max(maxReach, i+ a[i]);
                step--;
                if (step == 0)
                {
                    jump++;
                    if (i >=  maxReach)
                    {
                        return -1;
                    }
                    step= maxReach-i;        
                }
            }    
        }
        return jump;
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
    }
};

int main(){
    minJump s1;
    s1.getArray();
    cout<<"\tSTEPS:\t"<<s1.countSteps();
    return 0;
}