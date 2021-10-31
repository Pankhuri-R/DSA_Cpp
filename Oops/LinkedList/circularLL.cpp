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

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);

    if (head == NULL)
    {
        n->next = n;
        head = n;
        return;
    }

    node *temp = head;

    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
}

void insertAtTail(node *&head, int val)
{
    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }

    node *temp = head;
    node *n = new node(val);

    while (temp->next != head)
    {
        temp = temp->next;
    }

    temp->next = n;
    n->next = head;
}

void display(node *head)
{
    node *temp = head;

    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
}

int main()
{
    node *head = NULL;
    int arr1[] = {1, 2, 3, 4};

    for (int i = 0; i < 4; i++)
    {
        insertAtTail(head, arr1[i]);
    }

    display(head);
    cout << endl;
    insertAtHead(head, 5);
    display(head);
    return 0;
}