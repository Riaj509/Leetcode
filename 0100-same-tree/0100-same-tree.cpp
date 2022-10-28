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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        if(p==NULL && q==NULL) return true;
        if(p==NULL || q==NULL) return false;
        
         return check(p,q);
        
    }
    
    bool check(TreeNode *fs,TreeNode *sn){
        
        if(fs==NULL && sn==NULL) return true;
        if(fs==NULL || sn==NULL) return false;
        
        if(fs->val !=sn->val) return false;
        
        return (check(fs->left,sn->left) && check(fs->right,sn->right));
    }
};