#include <bits/stdc++.h>
using namespace std;

#define c cin
#define loop(i, n) for (int i = 0; i < n; i++)
#define loop2(i, n) for (int i = 1; i < n; i++)
#define loop3(i, n) for (int i = 1; i <= n; i++)
#define loop4(i, n, arr)        \
    for (int i = 0; i < n; i++) \
    {                           \
        arr[i] = i;             \
    }

class tree
{
public:
    int val;
    tree *left;
    tree *right;

    tree(int num)
    {
        val = num;
        left = NULL;
        right = NULL;
    }
};

int isbalanced(tree *);
void insert(tree *, vector<int>, int);
int minDepth(tree *);
int height(tree *);

int main()
{
    // tree *root = new tree(1);
    // tree *start = root;

    // // tree *root2 = root;

    // tree *temp = new tree(2);
    // root->left = temp;

    // tree *temp2 = new tree(2);
    // root->right = temp2;

    // tree *temp3 = new tree(3);
    // root = root->left;
    // root->right = temp3;

    // tree *temp4 = new tree(3);
    // root->left = temp4;

    // tree *temp5 = new tree(4);
    // root = root->left;
    // root->right = temp5;

    // tree *temp6 = new tree(4);
    // root->left = temp6;

    // int l = 0, r = 0;

    tree *root = new tree(2);
    tree *start = root;

    // tree *temp5 = new tree(3);
    // root->right = temp5;
    // root = root->left;

    tree *temp = new tree(3);
    root->left = temp;
    root = root->left;

    tree *temp2 = new tree(4);
    root->left = temp2;
    root = root->left;

    tree *temp3 = new tree(5);
    root->left = temp3;
    root = root->left;

    tree *temp4 = new tree(6);
    root->left = temp4;
    root = root->left;

    cout << minDepth(start);

    // int n;
    // c >> n;
    // vector<int> v(n);
    // loop(i, n)
    //         c >>
    //     v[i];

    // if (v[0] != -1)
    // {
    //     tree *root = new tree(v[0]);
    //     insert(root, v, 0);
    // }
    // // loop(i, n)
    // // {
    // //     if (v[i] != -1)

    // // }

    // stack<int> s;
}

// void insert(tree *root, vector<int> v, int i)
// {
//     // if ((i + 1) >= v.size() && v[i + 1] == -1)
//     // {
//     //     root->left = NULL;
//     // }

//     if ((i + 1) >= v.size() && v[i + 1] != -1)
//     {
//         tree *temp = new tree(v[i + 1]);
//         root->left = temp;
//         insert(root->left, v, i + 1);
//     }

//     if ((i + 2) >= v.size() && v[i + 2] != -1)
//     {
//         tree *temp = new tree(v[i + 2]);
//         root->right = temp;
//         insert(root->right, v, i + 2);
//     }

// }

// int isbalanced(tree *node)
// {
//     /* base case tree is empty */
//     if (node == NULL)
//         return 0;

//     /* If tree is not empty then
//     height = 1 + max of left
//         height and right heights */
//     return 1 + min(isbalanced(node->left),
//                    isbalanced(node->right));
// }

int minDepth(tree *root)
{
    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL)
        return 1;

    if (root->left != NULL && root->right == NULL)
        return 1 + minDepth(root->left);

    if (root->left == NULL && root->right != NULL)
        return 1 + minDepth(root->right);

    // if (root->left != NULL && root->right != NULL)
        return 1 + min(minDepth(root->left), minDepth(root->right));
}

// int height(tree *root)
// {
//     if (root == NULL)
//         return 0;

//     return 1 + min(height(root->left), height(root->right));
// }