//sorting array of 0 1 2
//three pointers-low,mid and high are used
//low--> position from where 1 starts
//mid--> position from where unknown starts
//high-->position from where 2 starts

//mid and low pointing at first element and high to the last element in start
//if arr[mid]=0 => swap arr[low] and arr[mid], low++ & mid ++
//if arr[mid]=1 => mid++
//if arr[mid]=2 => swap arr[mid] & arr[high],  high--

#include <bits\stdc++.h>

using namespace std;

void swap(int arr[], int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void dnfSort(int arr[], int n)
{
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr, low, mid);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else if (arr[mid] == 2)
        {
            swap(arr, mid, high);
            high--;
        }
    }
}

int main()
{
    int arr[] = {1, 0, 2, 1, 0, 1, 2, 1, 2};
    dnfSort(arr, 9);
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}