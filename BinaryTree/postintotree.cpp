//given postorder and inorder build the binary tree

#include <bits\stdc++.h>

using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int search(int inorder[], int start, int end, int curr)
{
    for (int i = start; i <= end; i++)
    {
        if (inorder[i] == curr)
        {
            return i;
        }
    }
    return -1;
}

Node *buildtree(int postorder[], int postend, int inorder[], int start, int end)
{
    static int idx = postend;
    if (start > end)
    {
        return NULL;
    }

    int curr = postorder[idx];
    idx--;

    Node *node = new Node(curr);
    if (start == end)
    {
        return node;
    }

    int pos = search(inorder, start, end, curr);
    node->right = buildtree(postorder, postend, inorder, pos + 1, end);
    node->left = buildtree(postorder, postend, inorder, start, pos - 1);

    return node;
}

void inorderPrint(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorderPrint(root->left);
    cout << root->data << " ";
    inorderPrint(root->right);
}

void postorderPrint(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorderPrint(root->left);
    postorderPrint(root->right);
    cout << root->data << " ";
}

int main()
{
    int postorder[] = {4, 2, 5, 3, 1};
    int inorder[] = {4, 2, 1, 5, 3};

    Node *root = buildtree(postorder, 4, inorder, 0, 4);

    inorderPrint(root);

    cout << endl;

    postorderPrint(root);

    return 0;
}