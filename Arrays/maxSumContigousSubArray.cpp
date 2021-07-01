#include<iostream>

using namespace std;

class maxSum{
    public:
    int n, cur_sum=0, max_sum=0;
    int arr[];


    void getArray()
    {
        cout << "Enter number of elements in the array: ";
        cin >> n;
        cout << "Enter the elements " << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }
    
    void sum(){
        for (int i = 0; i < n; i++)
        {
            cur_sum=arr[i];
            for (int j = i+1; j < n; j++)
            {
                cur_sum+=arr[j];
                // cout<<"CS= "<<cur_sum<<endl;
                if (cur_sum>max_sum)
                {
                    max_sum=cur_sum;
                    // cout<<"MS= "<<max_sum<<endl;
                }
                
            }
            
        }
     cout<<max_sum<<endl;   
    }

};

int main(){
    maxSum m1;
    m1.getArray();
    m1.sum();
    return 0;
}