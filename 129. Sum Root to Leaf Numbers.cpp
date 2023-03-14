/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    int sumNumbers(TreeNode *root)
    {
        TreeNode *ls = root;
        int ans = 0;
        solve(ls, ans, 0);
        return ans;
    }

    void solve(TreeNode *root, int &ans, long long tmp)
    {
        if (root->left == NULL && root->right == NULL)
        {
            tmp = tmp * 10 + root->val;
            ans += tmp;
            return;
        }
        tmp = tmp * 10 + root->val;
        if (root->left)
            solve(root->left, ans, tmp);
        if (root->right)
            solve(root->right, ans, tmp);
    }
};