class Solution {
public:
    int jump(vector<int>& nums) {
        
        int curr_reach=0,max_reach=0,jumps=0;
    for(int i=0;i<nums.size()-1;i++)
    {
        max_reach=max(max_reach,i+nums[i]);
        if(i==curr_reach)
        {
            curr_reach=max_reach;
            jumps++;
        }      
    }
    return jumps;
    }
    
   
};