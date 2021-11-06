#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node *next;

    node()
    {
        next = NULL;
    }

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

class queue
{

    node *front;
    node *back;

public:
    queue()
    {
        front = NULL;
        back = NULL;
    }
    void enqueue(int val)
    {
        node *n = new node(val);
        if (front == NULL)
        {
            back = n;
            front = n;
            return;
        }
        back->next = n;
        back = n;
    }

    void dequeue()
    {
        if (front == NULL)
        {
            cout << "No elements to delete\n";
            return;
        }

        node *todelete = front;
        front = front->next;
        delete todelete;
    }

    int peek()
    {
        if (front == NULL)
        {
            cout << "No elements to delete\n";
            return -1;
        }
        return front->data;
    }

    bool empty()
    {
        if (front == NULL)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    cout << q.peek() << endl;
    q.dequeue();
    cout << q.peek() << endl;
    cout << q.empty() << endl;
    q.dequeue();
    q.dequeue();
    q.dequeue();
    cout << q.empty() << endl;
    return 0;
}