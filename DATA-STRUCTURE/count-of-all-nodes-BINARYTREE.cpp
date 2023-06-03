#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int countofnodes(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return countofnodes(root->left) + countofnodes(root->right) + 1;
}

int main()
{
    return 0;
}