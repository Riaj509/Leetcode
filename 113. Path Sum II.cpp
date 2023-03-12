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
    vector<vector<int>> path;
    vector<vector<int>> pathSum(TreeNode *root, int targetSum)
    {
        if (!root)
            return path;
        TreeNode *nod = root;
        vector<int> k;
        solve(nod, targetSum, k);
        return path;
    }

    void solve(TreeNode *root, int cur, vector<int> &a)
    {
        a.push_back(root->val);
        cur -= root->val;
        if (root->left == NULL && root->right == NULL)
        {
            if (cur == 0)
                path.push_back(a);
        }

        if (root->left)
            solve(root->left, cur, a);
        if (root->right)
            solve(root->right, cur, a);

        a.pop_back();
    }
};