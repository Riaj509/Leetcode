class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<long long ,long long> f;
        long long  tot=0,vl=0;
        for(long long i=0;i<nums.size();i++){
            f[nums[i]]++;
           if(tot<f[nums[i]]){
               tot=f[nums[i]];
               vl=nums[i];
           }
        }
        return vl;
        
        
    }
};