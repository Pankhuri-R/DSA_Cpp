#include <iostream>

using namespace std;

int firstOccur(int arr[], int n, int key, int i)
{
    if (i == n)
    {
        return -1;
    }

    if (arr[i] == key)
    {
        return i;
    }

    return firstOccur(arr, n, key, i + 1);
}

int lastOccur(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }

    int restArray = lastOccur(arr, n, i + 1, key);
    if (restArray != -1)
    {
        return restArray;
    }
    if (arr[i] == key)
    {
        return i;
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int i = 0;
    int key;
    cout << "Enter the key: ";
    cin >> key;
    cout << firstOccur(arr, n, key, i) << endl;
    cout << lastOccur(arr, n, i, key);
    return 0;
}