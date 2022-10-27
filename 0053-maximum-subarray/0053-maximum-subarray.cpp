class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int n=nums.size();
        
         return check(0,n-1,nums);
    }
    
    
    int check(int l,int r,vector<int>&nums){
        
        if(l>r) return INT_MIN;
        
        int mid=(l+r)>>1;
        
        int mx_l=check(l,mid-1,nums);
        int mx_r=check(mid+1,r,nums); 
        
        int l_sm=0,r_sm=0,sm=0;
        for(int i=mid-1;i>=l;--i){
            sm+=nums[i];
            l_sm=max(l_sm,sm);
        }
        sm=0;
         for(int i=mid+1;i<=r;i++){
            sm+=nums[i];
            r_sm=max(r_sm,sm);
        }
        
        return max({mx_l,mx_r,l_sm+r_sm+nums[mid]});
    }
};