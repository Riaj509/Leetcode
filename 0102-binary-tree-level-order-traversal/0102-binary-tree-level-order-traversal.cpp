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
    
    

    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;

        
        TreeNode *fs=root;
        check(fs,0,ans);
        return ans;
    }
    
    void check(TreeNode *root,int dept,vector<vector<int>>&a){
        
        if(root==NULL) return ;       
        if(a.size()==dept)a.push_back(vector<int>());
        a[dept].push_back(root->val);
        check(root->left,dept+1,a);
        check(root->right,dept+1,a);
        
        

    }
};