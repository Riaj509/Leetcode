class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int fn=-1;
        for(int i=0;i<nums.size();i++)if(nums[i]!=i) {
            fn=i;
            break;
        }
       if(fn!=-1)return fn;
        return nums.size();
    }
};