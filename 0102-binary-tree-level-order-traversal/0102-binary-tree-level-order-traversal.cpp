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
class Solution {
public:        
    
    vector<vector<int>>ans;

    vector<vector<int>> levelOrder(TreeNode* root) {
        TreeNode *fs=root;
        check(fs,0);
        return ans;
    }
    
    void check(TreeNode *root,int dept){
        
        if(root==NULL) return ;
        if(ans.size()==dept) ans.push_back(vector<int>());
        
        ans[dept].push_back(root->val);
        check(root->left,dept+1);
        check(root->right,dept+1);
        
        

    }
};