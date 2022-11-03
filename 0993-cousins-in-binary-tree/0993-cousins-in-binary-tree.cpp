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
    int xpar,ypar,xdep,ydep;
    void dept(TreeNode* root,int x,int y,int par,int dep){
        if(root==NULL) return;
        if(root->val==x){
            xpar=par;
            xdep=dep;
            return ;
        }
        if(root->val==y){
            ypar=par;
            ydep=dep;
            return ;
        }
        
        dept(root->left,x,y,root->val,dep+1);
        dept(root->right,x,y,root->val,dep+1);
    }
    bool isCousins(TreeNode* root, int x, int y) {
        
        
        if(root->left==NULL || root->right==NULL) return false;
        
        dept(root,x,y,0,0);
        if(xpar!=ypar && xdep==ydep) return true;
        
        return false;
    }
};