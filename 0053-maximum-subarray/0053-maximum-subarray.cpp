class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int n=nums.size();
        int cur_sm=0,mx_so_far=INT_MIN;
        for(int i=0;i<n;++i){
            cur_sm+=nums[i];
            
            
            if(cur_sm>mx_so_far){
                mx_so_far=cur_sm;
            }
            if(cur_sm<0){
                cur_sm=0;
            }
            
        }
        
        return mx_so_far;
    }
};