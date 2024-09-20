#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *insert(Node *root, int data)
{
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }
    if (data > root->data)
    {
        root->right = insert(root->right, data);
    }
    else
    {
        root->left = insert(root->left, data);
    }
    return root;
}

void takeInput(Node *&root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        root = insert(root, data);
        cin >> data;
    }
}

void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void levelOrder(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

Node *minNode(Node *root)
{
    if (root == NULL)
        return root;
    Node *temp = root;

    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}

Node *deleteBST(Node *root, int x)
{
    if (root == NULL)
    {
        return root;
    }

    if (root->data == x)
    {
        // 0 child

        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }

        // 1 child
        // only left child
        if (root->left != NULL && root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        // only right child
        if (root->left == NULL && root->right != NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }

        // 2 child
        if (root->left != NULL && root->right != NULL)
        {
            int mini = minNode(root->right)->data;
            root->data = mini;
            root->right = deleteBST(root->right, mini);
            return root;
        }
    }
    else if (root->data > x)
    {
        root->left = deleteBST(root->left, x);
        return root;
    }
    else
    {
        root->right = deleteBST(root->right, x);
        return root;
    }
}

int main()
{
    Node *root = NULL;
    cout << "Enter the node numbers: " << endl;
    takeInput(root);
    cout << "Traversal" << endl;

    levelOrder(root);

    root = deleteBST(root, 30);
    cout << "Tree after deletion:" << endl
         << endl;
    levelOrder(root);

    return 0;
}

// 30 20 25 40 50 45 60 -1