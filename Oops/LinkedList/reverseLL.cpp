#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

node *reverse(node *&head)
{
    node *previous = NULL;
    node *current = head;
    node *nextptr;

    while (current != NULL)
    {
        nextptr = current->next;
        current->next = previous;
        previous = current;
        current = nextptr;
    }
    head = previous;

    return head;
}

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

//recursive method

node *reverseRecursive(node *&head)
{

    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    node *newHead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;

    return newHead;
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
    display(head);
    // node *newHead = reverse(head);
    node *newHead = reverseRecursive(head);
    display(newHead);

    return 0;
}