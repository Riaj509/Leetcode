class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        int cur=nums[0],cnt=1;
        bool tig=false;
        for(int i=1;i<nums.size();i++){
            if(cur==nums[i])cnt++;
            if(cnt>1){
                tig=true;
                break;
            }
            if(cur!=nums[i]){
                cur=nums[i];
                cnt=1;
            }
            
        }
        return (tig)? true : false;
    }
};