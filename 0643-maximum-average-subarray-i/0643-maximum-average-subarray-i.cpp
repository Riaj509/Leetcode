class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        
        int sm=0,cur=0;
        vector<int>ans(nums.size());
        ans[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            ans[i]=ans[i-1]+nums[i];
        }
        sm=ans[k-1];
        for(int i=k;i<nums.size();i++){
            cur=(ans[i]-ans[i-k]);
            sm=max(cur,sm);
        }
        return (double) sm/k;
            
        
    }
};