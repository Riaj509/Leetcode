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
    int countNodes(TreeNode* root) {
        
        if(!root) return 0;
        int l=0,r=0;
        TreeNode *lf=root,*ri=root;
        while(lf){
            l++;
            lf=lf->left;
        }
         while(ri){
            l++;
            ri=ri->left;
        }
        
        if(l==r) return pow(2,l)-1;
        
        return 1+countNodes(root->left)+countNodes(root->right);
    }
};