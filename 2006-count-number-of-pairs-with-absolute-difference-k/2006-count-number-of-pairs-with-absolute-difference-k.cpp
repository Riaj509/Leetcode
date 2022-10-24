class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        map<int,int>f;
        int tot=0;
        for(int i=0;i<nums.size();i++){
            tot+=f[nums[i]-k];
            f[nums[i]]++;
        }
        
        return tot;
        
    }
};