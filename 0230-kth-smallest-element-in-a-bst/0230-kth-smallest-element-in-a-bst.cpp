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
    int ans,cnt;
    int kthSmallest(TreeNode* root, int k) {
           
        if(root==NULL) return 0;
        cnt=0;
        check(root,k);
        return ans;
    }
    
    void check(TreeNode* root,int k){
        
        if(root->left!=NULL) check(root->left,k);
        cnt++;
            
        if(cnt==k){
            ans=root->val;
            return;
        }  
        if(root->right!=NULL) 
            check(root->right,k);
        
        
       
    }
};