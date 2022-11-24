class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        
        int sm=0,cur=0;
        for(int i=1;i<nums.size();i++){
            nums[i]+=nums[i-1];
        }
        sm=nums[k-1];
        for(int i=k;i<nums.size();i++){
            cur=(nums[i]-nums[i-k]);
            sm=max(cur,sm);
        }
        return (double) sm/k;
            
        
    }
};