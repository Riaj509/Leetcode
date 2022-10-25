class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i=0;i<nums.size();++i){
            int res=-nums[i];
            
            int l=i+1,r=nums.size()-1;
            while(l<r){
                int sm=nums[l]+nums[r];
                if(sm==res){
                    vector<int>cur={nums[i],nums[l],nums[r]};
                    ans.push_back(cur);
                while(l<r && nums[l]==cur[1])l++;
                while(l<r && nums[r]==cur[2])r--;
                }
                else if(sm>res)r--;
                else l++;
            }
            
            while(i+1<nums.size() && nums[i+1]==nums[i]) i++;
            
        }
        
        return ans;
    }
};