#include <iostream>
using namespace std;

class node
{
public:
string word,mean;
    int data;
    node *left;
    node *right;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
        word=mean=-1;
    }
};

void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

node *insertBST(node *root, int key)
{
    if (root == NULL)
    {
        return new node(key);
    }
    if (key < root->data)
    {
        root->left = insertBST(root->left, key);
    }
    if (key > root->data)
    {
        root->right = insertBST(root->right, key);
    }
    return root;
}
node *searchBST(node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (key == root->data)
    {
        return root;
    }
    if (key < root->data)
    {
        return searchBST(root->left, key);
    }
    return searchBST(root->right, key);
}
node *inordersucc(node *root)
{
    node *curr = root;
    while (curr && curr->left != NULL)
    {
        curr = curr->left;
    }
    return curr;
}
node *deleteBST(node *root, int key)
{
    if (key < root->data)
    {
        root->left = deleteBST(root->left, key);
    }
    else if (key > root->data)
    {
        root->right = deleteBST(root->right, key);
    }
    else
    {
        if (root->left == NULL)
        {
            node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            node *temp = root->left;
            free(root);
            return temp;
        }
        node *temp = inordersucc(root->right);
        root->data = temp->data;
        root->right = deleteBST(root->right, key);
    }
}



int main()
{
    string key;
    int ch;
    while(ch!=6){
        cout<<"/n1.create BST "<<endl;
        cout<<"2. inorder print of BST "<<endl;
        cout<<"3. search element in BST "<<endl;
        cout<<"4. insert element in BST "<<endl;
        cout<<"5.delete element in BST "<<endl;
        cout<<"6. exist "<<endl;

        cout<<"enter the value of key "<<endl;
        cin>>key;
    }
    return 0;
}