#include <iostream>
#include <vector>
#include <deque>

using namespace std;

int main()
{
    int n, k;
    cout << "Enter the size of array and window size respectively: ";
    cin >> n >> k;

    vector<int> a(n);
    cout << "Enter the elements of vector" << endl;
    for (auto &i : a)
    {
        cin >> i;
    }

    deque<int> q;
    vector<int> ans;

    for (int i = 0; i < k; i++)
    {
        while (!q.empty() and (a[q.back()] < a[i]))
        {
            q.pop_back();
        }
        q.push_back(i);
    }

    ans.push_back(a[q.front()]);
    for (int i = k; i < n; i++)
    {
        if (q.front() == i - k)
        {
            q.pop_front();
        }
        while (!q.empty() and (a[q.back()] < a[i]))
        {
            q.pop_back();
        }
        q.push_back(i);
        ans.push_back(a[q.front()]);
    }

    for (auto i : ans)
    {
        cout << i << " ";
    }
}