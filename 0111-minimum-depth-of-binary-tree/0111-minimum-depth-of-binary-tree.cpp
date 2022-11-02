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
    int minDepth(TreeNode* root) {
        
        
        if(root==NULL) return 0;
        
        TreeNode *tr=root;
        
         return check(root);
        
    }
    
    int check(TreeNode *root){
        
        if(root==NULL) return 0;
        
        int lft=check(root->left);
        int ri=check(root->right);
        return (lft==0 || ri==0)? lft+ri+1 : min(lft,ri)+1;
    }
};