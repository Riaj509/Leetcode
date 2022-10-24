class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        
        for(int i=1;i<nums.size();i++)nums[i]+=nums[i-1];
        
        for(int i=0;i<queries.size();++i){
            int up=upper_bound(nums.begin(),nums.end(),queries[i])-nums.begin();
            if(up>=nums.size())ans.push_back(nums.size());
            else{
                if(nums[up]!=queries[i] ){
                    if(up-1<0)ans.push_back(0);
                    else ans.push_back(up);
                }
                else ans.push_back(up+1);
                
            }
        }
        
        return ans;
    }
};