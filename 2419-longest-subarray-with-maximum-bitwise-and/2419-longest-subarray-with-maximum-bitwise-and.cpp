class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        
        
        int mx=INT_MIN,cnt=0,ln=0;
        for(int i=0;i<nums.size();++i)mx=max(mx,nums[i]);
        for(int i=0;i<nums.size();++i){
            if(nums[i]==mx)cnt++;
            else {
                ln=max(ln,cnt);
                cnt=0;
            }
        }
        ln=max(ln,cnt);
        
        return ln;
        
        
    }
};