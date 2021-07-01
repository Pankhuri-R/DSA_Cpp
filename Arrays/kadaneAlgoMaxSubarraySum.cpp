#include<iostream>

using namespace std;

class kadane{
    public:
    int n,cur_sum,max_sum=0;
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
        int i=0;
        cur_sum=arr[i];
        max_sum=cur_sum;
        for (i = 1; i < n; i++)
        {
            if (arr[i]< cur_sum+arr[i])
            {
                cur_sum+=arr[i];
            }else{
                cur_sum=arr[i];
            }
            if (cur_sum>max_sum)
            {
                max_sum=cur_sum;
            }
        }
        cout<<"Maximum sum="<<max_sum<<endl;
    }
};

int main(){
    kadane k1;
    k1.getArray();
    k1.sum();
    return 0;
}