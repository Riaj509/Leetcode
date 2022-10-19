class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int fn=0,i=0;
        for( i=0;i<nums.size();i++){
            fn^=(i^nums[i]);
        }
    return fn^i;
       
    }
};