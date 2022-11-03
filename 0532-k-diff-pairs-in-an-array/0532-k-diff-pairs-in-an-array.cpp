class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        
        int pair=0;
        
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();++i){
            if(i>0 && nums[i]==nums[i-1])continue;
            int need=nums[i]+k;
            int ln=lower_bound(nums.begin()+i+1,nums.end(),need)-nums.begin();
            if(ln>i && ln<nums.size() && nums[ln]==need) pair++;
        }
        
        return pair;
        
    }
};