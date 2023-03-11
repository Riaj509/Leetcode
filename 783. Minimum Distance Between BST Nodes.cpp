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
    int minDiffInBST(TreeNode *root)
    {
        int ans = INT_MAX;
        int cur = -1;
        solve(root, ans, cur);
        return ans;
    }

    void solve(TreeNode *tr, int &diff, int &cur)
    {
        if (tr == NULL)
            return;

        solve(tr->left, diff, cur);
        if (cur != -1)
            diff = min(diff, tr->val - cur);
        cur = tr->val;
        solve(tr->right, diff, cur);
    }
};