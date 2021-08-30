#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

#define c cin
#define loop(i, n) for (int i = 0; i < n; i++)
#define loop2(i, n) for (int i = 1; i < n; i++)
#define loop3(i, n) for (int i = 1; i <= n; i++)
#define loop4(i, n, arr)        \
    for (int i = 0; i < n; i++) \
    {                           \
        arr[i] = i;             \
    }
#define loop5(i, n) for (int i = 0; i <= n; i++)

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

int maxProduct(TreeNode *);
void ifunc(long long &, long long, long long, TreeNode *);
long long sum(TreeNode *);

int main()
{
    TreeNode *root = new TreeNode(1);

    TreeNode *temp = root;

    TreeNode *temp2 = new TreeNode(2);
    temp->left = temp2;
    TreeNode *temp3 = new TreeNode(3);
    temp->right = temp3;

    TreeNode *temp6 = new TreeNode(6);
    temp->right->right = temp6;

    TreeNode *temp4 = new TreeNode(4);
    temp->left->left = temp4;

    TreeNode *temp5 = new TreeNode(5);
    temp->left->right = temp5;

    cout << maxProduct(root);
}

int maxProduct(TreeNode *root)
{

    if (root == NULL)
        return 0;

    //         int l = sum(root->left);
    //         int r = sum(root->right);

    //         int maxi = max((l+root->val)*r , (r+root->val)*l);

    long long l = sum(root->left);
    long long r = sum(root->right);

    long long total_sum = l + r + root->val;

    long long maxi = INT_MIN;

    ifunc(maxi, total_sum, 0, root);

    return maxi % (1000000007);
}

void ifunc(long long &maxi, long long total_sum, long long sum_sub, TreeNode *root)
{
    if (root == NULL)
        return;

    long long l = sum(root->left);
    long long r = total_sum - l - sum_sub - root->val;

    // cout << l << " " << r << endl;

    maxi = max(max((l + sum_sub + root->val) * r, (r + sum_sub + root->val) * l), maxi);
    // cout << maxi << endl;

    ifunc(maxi, total_sum, r + sum_sub + root->val, root->left);
    ifunc(maxi, total_sum, l + sum_sub + root->val, root->right);
}

long long sum(TreeNode *root)
{
    if (root == NULL)
        return 0;

    return root->val + sum(root->left) + sum(root->right);
}