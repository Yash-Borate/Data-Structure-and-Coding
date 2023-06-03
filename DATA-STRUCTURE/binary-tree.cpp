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

/*      1    ROOT
       / \
      2   3   leaves

*/

int main()
{
    struct node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    return 0;
}