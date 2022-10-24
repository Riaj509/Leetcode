/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        TreeNode *or1=original,*co=cloned;
        
        TreeNode *ans=NULL;
        
        check(or1,co,target,ans);
        
        return ans;
        
    }
    
    void check(TreeNode *or1,TreeNode *co,TreeNode*tr,TreeNode *&ans){
        if(!co) return ;
        
        if(or1->left!=NULL)check(or1->left,co->left,tr,ans);
        if(or1==tr)ans=co;
        if(or1->right!=NULL) check(or1->right,co->right,tr,ans);
        
    }
};