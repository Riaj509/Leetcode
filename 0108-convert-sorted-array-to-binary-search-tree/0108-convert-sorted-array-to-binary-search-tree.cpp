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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n=nums.size();
        
        return  create(nums,0,n-1);
    }
    
    TreeNode* create(vector<int> &a,int l, int r){
        if(l>r) return NULL;
        
        int mid=(l+r)>>1;
        TreeNode *root=new TreeNode(a[mid]);
        root->left=create(a,l,mid-1);
        root->right=create(a,mid+1,r);
        
        return root;
    }
};