#include <iostream>
#include <stack>

using namespace std;

void insertAtBottom(stack<int> &st, int elem)
{

    if (st.empty())
    {
        st.push(elem);
        return;
    }

    int topelem = st.top();
    st.pop();
    insertAtBottom(st, elem);

    st.push(topelem);
}

void reverse(stack<int> &st)
{

    if (st.empty())
    {
        return;
    }

    int elem = st.top();
    st.pop();
    reverse(st);

    insertAtBottom(st, elem);
}

int main()
{
    stack<int> st;
    for (int i = 1; i <= 5; i++)
    {
        st.push(i);
    }

    reverse(st);
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}