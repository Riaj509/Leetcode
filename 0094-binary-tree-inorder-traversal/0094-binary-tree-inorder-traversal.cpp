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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>v;
        
        ck(root,v);
        return v;
    }
    
    void ck(TreeNode * root,vector<int>&a){
        if(root== NULL) return;
        
        ck(root->left,a);
        a.push_back(root->val);
        ck(root->right,a);
    }
};