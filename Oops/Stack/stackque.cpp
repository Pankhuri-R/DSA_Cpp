#include <bits\stdc++.h>

using namespace std;

// method 1- making push costly: making 2 queues, inserting in q2, then adding all elems of q1 in q2, then swaping q1 q2

class Stack
{
    int N;
    queue<int> q1;
    queue<int> q2;

public:
    Stack()
    {
        N = 0;
    }

    void push(int val)
    {
        q2.push(val);
        N++;
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }

    void pop()
    {
        if (q1.empty())
        {
            cout << "No elements to pop\n";
            return;
        }
        q1.pop();
        N--;
    }

    int top()
    {
        if (q1.empty())
        {
            cout << "No elements \n";
            return -1;
        }
        return q1.front();
    }

    int size()
    {
        return N;
    }
};

//method2 - making pop costly

class Stackk
{
    int N;
    queue<int> q1;
    queue<int> q2;

public:
    Stackk()
    {
        N = 0;
    }

    void push(int val)
    {
        q1.push(val);
        N++;
    }

    void pop()
    {
        if (q1.empty())
        {
            return;
        }

        while (q1.size() != 1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        N--;

        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }

    int top()
    {
        if (q1.empty())
        {
            cout << "No elements \n";
            return -1;
        }
        while (q1.size() != 1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int ans = q1.front();
        q2.push(ans);

        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;

        return ans;
    }

    int size()
    {
        return N;
    }
};

int main()
{
    Stackk st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    return 0;
}