#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

struct Info
{

    int size;
    int Max;
    int Min;
    int ans;
    bool isBST;
};

Info largestBST(node *root)
{
    if (root == NULL)
    {
        return {0, INT_MIN, INT_MAX, 0, true};
    }
    if (root->left == NULL && root->right == NULL)
    {
        return {1, root->data, root->data, 1, true};
    }

    Info leftinfo = largestBST(root->left);
    Info rightinfo = largestBST(root->right);

    Info curr;

    curr.size = (1 + leftinfo.size + rightinfo.size);
    
    if (leftinfo.isBST && rightinfo.isBST && leftinfo.Max < root->data && rightinfo.Min > root->data)
    {
        curr.Min = min(leftinfo.Min, min(rightinfo.Min, root->data));
        curr.Max = max(rightinfo.Max, max(root->data, leftinfo.Max));
        curr.ans = curr.size;
        curr.isBST = true;

        return curr;
    }
    curr.ans = max(leftinfo.ans, rightinfo.ans);
    curr.isBST = false;
    return curr;
}

int main()
{
    node *root = new node(15);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(5);

    cout << "values" << largestBST(root).ans << " ";
    return 0;
}