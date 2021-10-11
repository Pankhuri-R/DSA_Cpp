// arr[0]>=arr[1]<=arr[2]>=arr[3]<=arr[4]...........
// complexity= O(N)

#include <bits\stdc++.h>

using namespace std;

void swap(int arr[], int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void waveSort(int arr[], int n)
{
    for (int i = 1; i < n; i += 2)
    {
        if (arr[i] > arr[i - 1])
        {
            swap(arr, i, i - 1);
        }
        if (arr[i] > arr[i + 1] && i <= n - 2)
        {
            swap(arr, i, i + 1);
        }
    }
}

int main()
{
    int arr[] = {1, 3, 4, 7, 5, 6, 2};
    waveSort(arr, (sizeof(arr) / sizeof(arr[0])));
    for (auto elem : arr)
    {
        cout << elem << " ";
    }
    return 0;
}