class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int>f;
        vector<int>ans;
        for(int i=0;i,nums.size();++i){
            int need=target-nums[i];

            if(f.find(need)!=f.end()){
                ans.push_back(i);
                ans.push_back(f[need]);
                break;
            }
            f[nums[i]]=i;
        }
        return ans;
       
    }
};