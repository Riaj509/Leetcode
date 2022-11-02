class Solution {
public:
    int maximumXOR(vector<int>& nums) {
        
        
        int ans=0;
        for(int i=0;i<32;i++){
            int set=0;
            for(int j=0;j<nums.size();++j){
                if(nums[j]&(1<<i))set++;
            }
            
            if(set)ans+=(1<<i);
            
        }
        
        return ans;
    }
};