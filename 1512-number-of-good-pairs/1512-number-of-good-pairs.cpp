class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        vector<int>ans(101,0);
        int res=0;
        for(int i=0;i<nums.size();i++)ans[nums[i]]++;
        
        for(int i=0;i<101;i++)res+=(ans[i]*(ans[i]-1))/2;
        return res;
    }
};