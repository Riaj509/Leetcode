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
    int ans;
    int rangeSumBST(TreeNode* root, int low, int high) {
        TreeNode *ts=root;
        
            check(root,low,high);
        
        return ans;
    }
    
    void check(TreeNode *root,int l,int h){
        if(!root) return;
        
        if(root->left!=NULL) check(root->left,l,h);
        if(root->val>=l && root->val<=h)ans+=root->val;
        if(root->right!=NULL) check(root->right,l,h);
    }
};