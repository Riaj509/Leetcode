class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        
        
        for(int i=0;i<nums.size()-2;i++)if(nums[i]==nums[i+1] || nums[i]==nums[i+2]) return nums[i]; return nums[nums.size()-1];
    }
   
};