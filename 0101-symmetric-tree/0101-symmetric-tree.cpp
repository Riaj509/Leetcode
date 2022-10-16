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
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return false;
        return ck(root->left,root->right);
    }
    
    bool ck(TreeNode * lf,TreeNode *ri){
        if(lf && !ri) return false;
        if(!lf && !ri) return true;
        if(!lf && ri) return false;
        
        if(lf->val !=ri->val) return false;
        
        return (ck(lf->left,ri->right)&&ck(lf->right,ri->left));
    }
};