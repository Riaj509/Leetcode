class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int fs=INT_MAX,sn=INT_MAX;
       for(int i=0;i<nums.size();i++){
           if(nums[i]<=fs)fs=nums[i];
           else if(nums[i]<=sn)sn=nums[i];
           else return true;
       }
        return false;
    }
};