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
    bool isBalanced(TreeNode* root) {
        
        
        if( root==NULL) return true;
        
        int lft=dept(root->left);
        int ri=dept(root->right);
        
        return abs(lft-ri)<=1&&isBalanced(root->left) && isBalanced(root->right);
    }
    
    int dept(TreeNode *no){
        if(no==NULL) return 0;
        
        return max(dept(no->left),dept(no->right))+1;
    }
};