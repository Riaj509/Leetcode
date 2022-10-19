class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        long long  ini=nums[0],cont=1;
        for(long long i=0;i<nums.size();i++){
          if(nums[i]==ini)cont++;
          else cont--;
            if(cont==0){
                ini=nums[i];
                cont=1;
            }
        }
        return ini;
        
        
    }
};