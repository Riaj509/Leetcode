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
    bool isCompleteTree(TreeNode *root)
    {
        TreeNode *r = root;
        int dep = 0, cur = 1;
        dep = depth(r);

        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            int x = q.size();
            if (cur < dep)
            {
                while (x--)
                {
                    auto y = q.front();
                    q.pop();

                    q.push(y->left);
                    q.push(y->right);
                }
                else
                {
                    while (x--)
                    {
                        auto y = q.front();
                        q.pop();

                        q.push(y->left);
                        q.push(y->right);
                    }
                }
            }
            return true;
        }

        int depth(TreeNode * root)
        {
            if (!root)
                return 0;
            return max(depth(root->left), depth(root->right)) + 1;
        }
    };