//append last k nodes to start

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

void insertAtTail(node *&head, int val)
{
    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = n;
}

void knodes(node *&head, int pos)
{
    node *temp = head;
    int count = 1, l = 1;
    node *end = head;

    while (end->next != NULL)
    {
        end = end->next;
        l++;
    }

    while (temp != NULL && count != (l - pos))
    {
        temp = temp->next;
        count++;
    }
    node *start = temp->next;

    end->next = head;
    temp->next = NULL;
    head = start;
}

void display(node *head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    display(head);
    knodes(head, 3);
    display(head);
    return 0;
}