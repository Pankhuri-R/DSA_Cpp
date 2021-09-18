#include <iostream>

using namespace std;

bool sortedOrNot(int arr[], int n)
{
    if (n == 1)
    {
        return true;
    }

    bool restArray = sortedOrNot(arr + 1, n - 1);
    return (arr[0] < arr[1] && restArray);
}

int main()
{
    int arr[] = {1};
    cout << sortedOrNot(arr, 1);
    return 0;
}